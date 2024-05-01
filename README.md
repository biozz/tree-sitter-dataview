# tree-sitter-dataview

This is a [Tree-sitter](https://tree-sitter.github.io) grammar for [Obsidian DataView](https://blacksmithgu.github.io/obsidian-dataview) query language.

Wouldn't it be cool to have DataView as an external utility to run queries in the browser?

This is a work-in-progress project. Please see compatibility matrix below.

## Compatibility

| Feature                                         | Status | Comment |
|-------------------------------------------------|--------|---------|
| **Keywords**                                    | -      |         |
| - `LIST`                                        | ✅     |         |
| - `TASK`                                        | ✅     |         |
| - `TABLE`                                       | ✅     |         |
| - `CALENDAR`                                    | ✅     |         |
| - `WHERE`                                       | ✅     |         |
| - `FROM`                                        | ✅     |         |
| - `SORT`                                        | ❌     |         |
| - `GROUP BY`                                    | ❌     |         |
| - `FLATTEN`                                     | ❌     |         |
| - `WITHOUT ID`                                  | ✅     |         |
| - `ASC`                                         | ✅     |         |
| - `DESC`                                        | ✅     |         |
| - `ASCENDING`                                   | ❌     |         |
| - `DESCENDING`                                  | ❌     |         |
| **Expressions**                                 | -      |         |
| - `AND`                                         | ❌     |         |
| - `OR`                                          | ❌     |         |
| - parenthesis precedence                        | ❌     |         |
| - comparators                                   | ❌     |         |
| - wiki links (`[[]]`, `outgoing()`)             | ❌     |         |
| - sources combinations                          | ❌     |         |
| **Functions**                                   | -      |         |
| - Constructors                                  | ❌     |         |
| -- `object(key1, value1, ...)`                  | ❌     |         |
| -- `list(value1, value2, ...)`                  | ❌     |         |
| -- `date(any)`                                  | ❌     |         |
| -- `date(text, format)`                         | ❌     |         |
| -- `dur(any)`                                   | ❌     |         |
| -- `number(string)`                             | ❌     |         |
| -- `string(any)`                                | ❌     |         |
| -- `link(path, [display])`                      | ❌     |         |
| -- `embed(link, [embed?])`                      | ❌     |         |
| -- `elink(url, [display])`                      | ❌     |         |
| -- `typeof(any)`                                | ❌     |         |
| - *Numeric Operations*                          | -      |         |
| -- `round(number, [digits])`                    | ❌     |         |
| -- `trunc(number)`                              | ❌     |         |
| -- `floor(number)`                              | ❌     |         |
| -- `ceil(number)`                               | ❌     |         |
| -- `min(a, b, ..)`                              | ❌     |         |
| -- `max(a, b, ...)`                             | ❌     |         |
| -- `sum(array)`                                 | ❌     |         |
| -- `product(array)`                             | ❌     |         |
| -- `reduce(array, operand)`                     | ❌     |         |
| -- `average(array)`                             | ❌     |         |
| -- `minby(array, function)`                     | ❌     |         |
| -- `maxby(array, function)`                     | ❌     |         |
| - *Objects, Arrays, and String Operations*      | -      |         |
| -- `contains()` and friends                     | ❌     |         |
| -- `contains(object \|list\|string, value)`     | ❌     |         |
| -- `icontains(object\|list\|string, value)`     | ❌     |         |
| -- `econtains(object\|list\| string, value)`    | ❌     |         |
| -- `containsword(list\| string, value)`         | ❌     |         |
| -- `extract(object, key1, key2, ...)`           | ❌     |         |
| -- `sort(list)`                                 | ❌     |         |
| -- `reverse(list)`                              | ❌     |         |
| -- `length(object\| array)`                     | ❌     |         |
| -- `nonnull(array)`                             | ❌     |         |
| -- `all(array)`                                 | ❌     |         |
| -- `any(array)`                                 | ❌     |         |
| -- `none(array)`                                | ❌     |         |
| -- `join(array, [delimiter])`                   | ❌     |         |
| -- `filter(array, predicate)`                   | ❌     |         |
| -- `map(array, func)`                           | ❌     |         |
| -- `flat(array, [depth])`                       | ❌     |         |
| -- `slice(array, [start, [end]])`               | ❌     |         |
| -- *String Operations*                          |        |         |
| -- `regextest(pattern, string)`                 | ❌     |         |
| -- `regexmatch(pattern, string)`                | ❌     |         |
| -- `regexreplace(string, pattern, replacement)` | ❌     |         |
| -- `replace(string, pattern, replacement)`      | ❌     |         |
| -- `lower(string)`                              | ❌     |         |
| -- `upper(string)`                              | ❌     |         |
| -- `split(string, delimiter, [limit])`          | ❌     |         |
| -- `startswith(string, prefix)`                 | ❌     |         |
| -- `endswith(string, suffix)`                   | ❌     |         |
| -- `padleft(string, length, [padding])`         | ❌     |         |
| -- `padright(string, length, [padding])`        | ❌     |         |
| -- `substring(string, start, [end])`            | ❌     |         |
| -- `truncate(string, length, [suffix])`         | ❌     |         |
| - *Utility Functions*                           |        |         |
| -- `default(field, value)`                      | ❌     |         |
| -- `choice(bool, left, right)`                  | ❌     |         |
| -- `hash(seed, [text], [variant])`              | ❌     |         |
| -- `striptime(date)`                            | ❌     |         |
| -- `dateformat(date\|datetime, string)`         | ❌     |         |
| -- `durationformat(duration, string)`           | ❌     |         |
| -- `currencyformat(number, [currency])`         | ❌     |         |
| -- `localtime(date)`                            | ❌     |         |
| -- `meta(link)`                                 | ❌     |         |
| -- `meta(link).display`                         | ❌     |         |
| -- `meta(link).embed`                           | ❌     |         |
| -- `meta(link).path`                            | ❌     |         |
| -- `meta(link).subpath`                         | ❌     |         |
| -- `meta(link).type`                            | ❌     |         |
