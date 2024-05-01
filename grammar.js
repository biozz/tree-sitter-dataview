// NOTE:DataView is DQL and is read line-by-line, it is not like SQL.
// But we can still use lots of stuff from SQL parsers:
// - https://github.com/DerekStride/tree-sitter-sql
// - https://github.com/m-novikov/tree-sitter-sql

module.exports = grammar({
  name: 'dataview',
  extras: _ => [/\s\n/, /\s/],

  rules: {
    dataview: $ => seq(
      $._query_type,
      optional($.from),
      repeat(
        choice(
          $.sort,
          $.limit,
          $.group_by,
        )
      ),
    ),

    _newline: _ => /\n/,
    _double_quoted_string: _ => /"[^"]*"/,


    keyword_list: _ => make_keyword("list"),
    keyword_table: _ => make_keyword("table"),
    keyword_task: _ => make_keyword("task"),
    keyword_calendar: _ => make_keyword("calendar"),
    keyword_as: _ => make_keyword("as"),
    keyword_from: _ => make_keyword("from"),
    keyword_without_id: _ => make_keyword("without id"),
    keyword_where: _ => make_keyword("where"),
    keyword_sort: _ => make_keyword("sort"),
    keyword_group_by: _ => make_keyword("group by"),
    keyword_limit: _ => make_keyword("limit"),
    keyword_flatten: _ => make_keyword("flatten"),
    keyword_asc: _ => make_keyword("asc"),
    keyword_desc: _ => make_keyword("desc"),

    _query_type: $ => choice(
      $.list,
      $.table,
      $.task,
      $.calendar,
    ),

    list: $ => seq(
      $.keyword_list,
      optional($.keyword_without_id),
      optional($._terms),
    ),
    table: $ => seq(
      $.keyword_table,
      optional($.keyword_without_id),
      optional($._terms),
    ),
    task: $ => seq(
      $.keyword_task,
      optional($._terms),
    ),
    calendar: $ => seq(
      $.keyword_calendar,
      optional($._terms),
    ),

    _terms: $ => seq(
      $.term,
      repeat(
        seq(
          ',',
          $.term,
        )
      )
    ),
    term: $ => seq(
        choice(
          $.aliased_identifier,
          $.identifier,
        )
    ),

    _word: _ => /\w+/,
    _file_prop: _ => /file\.\w+/,
    identifier: $ => choice(
      $._word,
      $._file_prop,
    ),
    aliased_identifier: $ => seq(
        $.identifier,
        $.keyword_as,
        $.alias,
    ),
    alias: $ => choice(
      $._double_quoted_string,
      $._word,
    ),

    from: $ => seq(
      $.keyword_from,
      $._source,
    ),

    // TODO: OR (smt), AND smth(smth)
    _source: $ => choice(
      $.source_folder,
      $.source_tag,
    ),
    source_folder: $ => $._double_quoted_string,
    // TODO: slash directories
    source_tag: $ => /#\w+/,

    sort: $ => seq(
        $.keyword_sort,
        $.identifier,
        optional($.sort_direction),
    ),
    sort_direction: $ => choice($.keyword_asc, $.keyword_desc),

    limit: $ => seq(
        $.keyword_limit,
        $.limit_number,
    ),
    limit_number: _ => /\d+/,

    group_by: $ => seq(
      $.keyword_group_by,
      $.identifier,
    ),
  }
});


function make_keyword(word) {
  str = "";
  for (var i = 0; i < word.length; i++) {
    str = str + "[" + word.charAt(i).toLowerCase() + word.charAt(i).toUpperCase() + "]";
  }
  return new RegExp(str);
}
