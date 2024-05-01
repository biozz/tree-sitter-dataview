#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  sym__double_quoted_string = 1,
  sym_keyword_list = 2,
  sym_keyword_table = 3,
  sym_keyword_task = 4,
  sym_keyword_calendar = 5,
  sym_keyword_as = 6,
  sym_keyword_from = 7,
  sym_keyword_without_id = 8,
  sym_keyword_where = 9,
  sym_keyword_sort = 10,
  sym_keyword_group_by = 11,
  sym_keyword_limit = 12,
  sym_keyword_flatten = 13,
  sym_keyword_asc = 14,
  sym_keyword_desc = 15,
  anon_sym_COMMA = 16,
  sym__word = 17,
  sym__file_prop = 18,
  sym_source_tag = 19,
  sym_limit_number = 20,
  sym_dataview = 21,
  sym__query_type = 22,
  sym_list = 23,
  sym_table = 24,
  sym_task = 25,
  sym_calendar = 26,
  sym__terms = 27,
  sym_term = 28,
  sym_identifier = 29,
  sym_aliased_identifier = 30,
  sym_alias = 31,
  sym_from = 32,
  sym__source = 33,
  sym_source_folder = 34,
  sym_sort = 35,
  sym_sort_direction = 36,
  sym_limit = 37,
  sym_group_by = 38,
  aux_sym_dataview_repeat1 = 39,
  aux_sym__terms_repeat1 = 40,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__double_quoted_string] = "_double_quoted_string",
  [sym_keyword_list] = "keyword_list",
  [sym_keyword_table] = "keyword_table",
  [sym_keyword_task] = "keyword_task",
  [sym_keyword_calendar] = "keyword_calendar",
  [sym_keyword_as] = "keyword_as",
  [sym_keyword_from] = "keyword_from",
  [sym_keyword_without_id] = "keyword_without_id",
  [sym_keyword_where] = "keyword_where",
  [sym_keyword_sort] = "keyword_sort",
  [sym_keyword_group_by] = "keyword_group_by",
  [sym_keyword_limit] = "keyword_limit",
  [sym_keyword_flatten] = "keyword_flatten",
  [sym_keyword_asc] = "keyword_asc",
  [sym_keyword_desc] = "keyword_desc",
  [anon_sym_COMMA] = ",",
  [sym__word] = "_word",
  [sym__file_prop] = "_file_prop",
  [sym_source_tag] = "source_tag",
  [sym_limit_number] = "limit_number",
  [sym_dataview] = "dataview",
  [sym__query_type] = "_query_type",
  [sym_list] = "list",
  [sym_table] = "table",
  [sym_task] = "task",
  [sym_calendar] = "calendar",
  [sym__terms] = "_terms",
  [sym_term] = "term",
  [sym_identifier] = "identifier",
  [sym_aliased_identifier] = "aliased_identifier",
  [sym_alias] = "alias",
  [sym_from] = "from",
  [sym__source] = "_source",
  [sym_source_folder] = "source_folder",
  [sym_sort] = "sort",
  [sym_sort_direction] = "sort_direction",
  [sym_limit] = "limit",
  [sym_group_by] = "group_by",
  [aux_sym_dataview_repeat1] = "dataview_repeat1",
  [aux_sym__terms_repeat1] = "_terms_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__double_quoted_string] = sym__double_quoted_string,
  [sym_keyword_list] = sym_keyword_list,
  [sym_keyword_table] = sym_keyword_table,
  [sym_keyword_task] = sym_keyword_task,
  [sym_keyword_calendar] = sym_keyword_calendar,
  [sym_keyword_as] = sym_keyword_as,
  [sym_keyword_from] = sym_keyword_from,
  [sym_keyword_without_id] = sym_keyword_without_id,
  [sym_keyword_where] = sym_keyword_where,
  [sym_keyword_sort] = sym_keyword_sort,
  [sym_keyword_group_by] = sym_keyword_group_by,
  [sym_keyword_limit] = sym_keyword_limit,
  [sym_keyword_flatten] = sym_keyword_flatten,
  [sym_keyword_asc] = sym_keyword_asc,
  [sym_keyword_desc] = sym_keyword_desc,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym__word] = sym__word,
  [sym__file_prop] = sym__file_prop,
  [sym_source_tag] = sym_source_tag,
  [sym_limit_number] = sym_limit_number,
  [sym_dataview] = sym_dataview,
  [sym__query_type] = sym__query_type,
  [sym_list] = sym_list,
  [sym_table] = sym_table,
  [sym_task] = sym_task,
  [sym_calendar] = sym_calendar,
  [sym__terms] = sym__terms,
  [sym_term] = sym_term,
  [sym_identifier] = sym_identifier,
  [sym_aliased_identifier] = sym_aliased_identifier,
  [sym_alias] = sym_alias,
  [sym_from] = sym_from,
  [sym__source] = sym__source,
  [sym_source_folder] = sym_source_folder,
  [sym_sort] = sym_sort,
  [sym_sort_direction] = sym_sort_direction,
  [sym_limit] = sym_limit,
  [sym_group_by] = sym_group_by,
  [aux_sym_dataview_repeat1] = aux_sym_dataview_repeat1,
  [aux_sym__terms_repeat1] = aux_sym__terms_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__double_quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword_list] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_table] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_task] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_calendar] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_as] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_from] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_without_id] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_where] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_group_by] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_flatten] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_asc] = {
    .visible = true,
    .named = true,
  },
  [sym_keyword_desc] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym__file_prop] = {
    .visible = false,
    .named = true,
  },
  [sym_source_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_limit_number] = {
    .visible = true,
    .named = true,
  },
  [sym_dataview] = {
    .visible = true,
    .named = true,
  },
  [sym__query_type] = {
    .visible = false,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_calendar] = {
    .visible = true,
    .named = true,
  },
  [sym__terms] = {
    .visible = false,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_aliased_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_alias] = {
    .visible = true,
    .named = true,
  },
  [sym_from] = {
    .visible = true,
    .named = true,
  },
  [sym__source] = {
    .visible = false,
    .named = true,
  },
  [sym_source_folder] = {
    .visible = true,
    .named = true,
  },
  [sym_sort] = {
    .visible = true,
    .named = true,
  },
  [sym_sort_direction] = {
    .visible = true,
    .named = true,
  },
  [sym_limit] = {
    .visible = true,
    .named = true,
  },
  [sym_group_by] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_dataview_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__terms_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 13,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '"', 4,
        '#', 62,
        ',', 87,
        'F', 32,
        'f', 7,
        'A', 49,
        'a', 49,
        'C', 9,
        'c', 9,
        'D', 22,
        'd', 22,
        'G', 46,
        'g', 46,
        'L', 27,
        'l', 27,
        'S', 42,
        's', 42,
        'T', 10,
        't', 10,
        'W', 25,
        'w', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(69);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(61);
      END_STATE();
    case 14:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(34);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 16:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(85);
      END_STATE();
    case 17:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      END_STATE();
    case 18:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 24:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(24);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 26:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 27:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 29:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 31:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(72);
      END_STATE();
    case 32:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(11);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(75);
      END_STATE();
    case 36:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(84);
      END_STATE();
    case 40:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 41:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 42:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 43:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(1);
      END_STATE();
    case 45:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 46:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 48:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 49:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(26);
      END_STATE();
    case 53:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(82);
      END_STATE();
    case 56:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(2);
      END_STATE();
    case 57:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 59:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 60:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(81);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        '"', 4,
        '#', 62,
        ',', 87,
        'F', 32,
        'f', 7,
        'A', 49,
        'a', 49,
        'C', 9,
        'c', 9,
        'D', 22,
        'd', 22,
        'G', 46,
        'g', 46,
        'L', 27,
        'l', 27,
        'S', 42,
        's', 42,
        'T', 10,
        't', 10,
        'W', 25,
        'w', 25,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        'F', 106,
        'f', 92,
        'G', 108,
        'g', 108,
        'L', 96,
        'l', 96,
        'S', 102,
        's', 102,
        'W', 97,
        'w', 97,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        'F', 106,
        'f', 92,
        'G', 108,
        'g', 108,
        'L', 96,
        'l', 96,
        'S', 102,
        's', 102,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      ADVANCE_MAP(
        'A', 51,
        'a', 51,
        'D', 22,
        'd', 22,
        'G', 46,
        'g', 46,
        'L', 28,
        'l', 28,
        'S', 42,
        's', 42,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__double_quoted_string);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keyword_list);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_keyword_table);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_keyword_task);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_keyword_calendar);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_keyword_as);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_keyword_from);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_keyword_from);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_keyword_without_id);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_keyword_where);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_keyword_sort);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_keyword_sort);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_keyword_group_by);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_keyword_limit);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_keyword_limit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_keyword_flatten);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_keyword_asc);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_keyword_desc);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(94);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'l') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__file_prop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_source_tag);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_limit_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 66},
  [6] = {.lex_state = 66},
  [7] = {.lex_state = 66},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__double_quoted_string] = ACTIONS(1),
    [sym_keyword_list] = ACTIONS(1),
    [sym_keyword_table] = ACTIONS(1),
    [sym_keyword_task] = ACTIONS(1),
    [sym_keyword_calendar] = ACTIONS(1),
    [sym_keyword_as] = ACTIONS(1),
    [sym_keyword_from] = ACTIONS(1),
    [sym_keyword_without_id] = ACTIONS(1),
    [sym_keyword_where] = ACTIONS(1),
    [sym_keyword_sort] = ACTIONS(1),
    [sym_keyword_group_by] = ACTIONS(1),
    [sym_keyword_limit] = ACTIONS(1),
    [sym_keyword_flatten] = ACTIONS(1),
    [sym_keyword_desc] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym__file_prop] = ACTIONS(1),
    [sym_source_tag] = ACTIONS(1),
    [sym_limit_number] = ACTIONS(1),
  },
  [1] = {
    [sym_dataview] = STATE(41),
    [sym__query_type] = STATE(8),
    [sym_list] = STATE(8),
    [sym_table] = STATE(8),
    [sym_task] = STATE(8),
    [sym_calendar] = STATE(8),
    [sym_keyword_list] = ACTIONS(3),
    [sym_keyword_table] = ACTIONS(5),
    [sym_keyword_task] = ACTIONS(7),
    [sym_keyword_calendar] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(15), 1,
      sym_keyword_without_id,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(24), 1,
      sym__terms,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(13), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [31] = 9,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    ACTIONS(25), 1,
      sym_keyword_without_id,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(30), 1,
      sym__terms,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(23), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [62] = 8,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(26), 1,
      sym__terms,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(29), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [90] = 8,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(28), 1,
      sym__terms,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(33), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [118] = 8,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(25), 1,
      sym__terms,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(37), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [146] = 8,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(14), 1,
      sym_term,
    STATE(15), 1,
      sym_identifier,
    STATE(23), 1,
      sym_aliased_identifier,
    STATE(29), 1,
      sym__terms,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      sym_keyword_group_by,
    ACTIONS(41), 3,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_limit,
  [174] = 7,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 1,
      sym_keyword_from,
    ACTIONS(47), 1,
      sym_keyword_sort,
    ACTIONS(49), 1,
      sym_keyword_group_by,
    ACTIONS(51), 1,
      sym_keyword_limit,
    STATE(12), 1,
      sym_from,
    STATE(11), 4,
      sym_sort,
      sym_limit,
      sym_group_by,
      aux_sym_dataview_repeat1,
  [199] = 5,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_keyword_sort,
    ACTIONS(58), 1,
      sym_keyword_group_by,
    ACTIONS(61), 1,
      sym_keyword_limit,
    STATE(9), 4,
      sym_sort,
      sym_limit,
      sym_group_by,
      aux_sym_dataview_repeat1,
  [218] = 5,
    ACTIONS(47), 1,
      sym_keyword_sort,
    ACTIONS(49), 1,
      sym_keyword_group_by,
    ACTIONS(51), 1,
      sym_keyword_limit,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(9), 4,
      sym_sort,
      sym_limit,
      sym_group_by,
      aux_sym_dataview_repeat1,
  [237] = 5,
    ACTIONS(47), 1,
      sym_keyword_sort,
    ACTIONS(49), 1,
      sym_keyword_group_by,
    ACTIONS(51), 1,
      sym_keyword_limit,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(9), 4,
      sym_sort,
      sym_limit,
      sym_group_by,
      aux_sym_dataview_repeat1,
  [256] = 5,
    ACTIONS(47), 1,
      sym_keyword_sort,
    ACTIONS(49), 1,
      sym_keyword_group_by,
    ACTIONS(51), 1,
      sym_keyword_limit,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    STATE(10), 4,
      sym_sort,
      sym_limit,
      sym_group_by,
      aux_sym_dataview_repeat1,
  [275] = 1,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      sym_keyword_as,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [285] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(17), 1,
      aux_sym__terms_repeat1,
    ACTIONS(70), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [299] = 2,
    ACTIONS(76), 1,
      sym_keyword_as,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [311] = 3,
    STATE(36), 1,
      sym_sort_direction,
    ACTIONS(80), 2,
      sym_keyword_asc,
      sym_keyword_desc,
    ACTIONS(78), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [325] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym__terms_repeat1,
    ACTIONS(82), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [339] = 3,
    ACTIONS(86), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym__terms_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [353] = 1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [362] = 1,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [371] = 1,
    ACTIONS(84), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [380] = 1,
    ACTIONS(68), 6,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      sym_keyword_asc,
      sym_keyword_desc,
  [389] = 1,
    ACTIONS(74), 6,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
      anon_sym_COMMA,
  [398] = 1,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [406] = 1,
    ACTIONS(93), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [414] = 1,
    ACTIONS(95), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [422] = 5,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(15), 1,
      sym_identifier,
    STATE(21), 1,
      sym_term,
    STATE(23), 1,
      sym_aliased_identifier,
  [438] = 1,
    ACTIONS(97), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [446] = 1,
    ACTIONS(99), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [454] = 1,
    ACTIONS(39), 5,
      ts_builtin_sym_end,
      sym_keyword_from,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [462] = 1,
    ACTIONS(101), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [469] = 1,
    ACTIONS(103), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [476] = 1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [483] = 1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [490] = 1,
    ACTIONS(109), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [497] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_keyword_sort,
      sym_keyword_group_by,
      sym_keyword_limit,
  [504] = 3,
    ACTIONS(113), 1,
      sym__double_quoted_string,
    ACTIONS(115), 1,
      sym_source_tag,
    STATE(31), 2,
      sym__source,
      sym_source_folder,
  [515] = 2,
    STATE(20), 1,
      sym_alias,
    ACTIONS(117), 2,
      sym__double_quoted_string,
      sym__word,
  [523] = 3,
    ACTIONS(17), 1,
      sym__word,
    ACTIONS(19), 1,
      sym__file_prop,
    STATE(32), 1,
      sym_identifier,
  [533] = 3,
    ACTIONS(119), 1,
      sym__word,
    ACTIONS(121), 1,
      sym__file_prop,
    STATE(16), 1,
      sym_identifier,
  [543] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [547] = 1,
    ACTIONS(125), 1,
      sym_limit_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 199,
  [SMALL_STATE(10)] = 218,
  [SMALL_STATE(11)] = 237,
  [SMALL_STATE(12)] = 256,
  [SMALL_STATE(13)] = 275,
  [SMALL_STATE(14)] = 285,
  [SMALL_STATE(15)] = 299,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 339,
  [SMALL_STATE(19)] = 353,
  [SMALL_STATE(20)] = 362,
  [SMALL_STATE(21)] = 371,
  [SMALL_STATE(22)] = 380,
  [SMALL_STATE(23)] = 389,
  [SMALL_STATE(24)] = 398,
  [SMALL_STATE(25)] = 406,
  [SMALL_STATE(26)] = 414,
  [SMALL_STATE(27)] = 422,
  [SMALL_STATE(28)] = 438,
  [SMALL_STATE(29)] = 446,
  [SMALL_STATE(30)] = 454,
  [SMALL_STATE(31)] = 462,
  [SMALL_STATE(32)] = 469,
  [SMALL_STATE(33)] = 476,
  [SMALL_STATE(34)] = 483,
  [SMALL_STATE(35)] = 490,
  [SMALL_STATE(36)] = 497,
  [SMALL_STATE(37)] = 504,
  [SMALL_STATE(38)] = 515,
  [SMALL_STATE(39)] = 523,
  [SMALL_STATE(40)] = 533,
  [SMALL_STATE(41)] = 543,
  [SMALL_STATE(42)] = 547,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calendar, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_calendar, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_table, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataview, 1, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dataview_repeat1, 2, 0, 0),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataview_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataview_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dataview_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataview, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dataview, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terms, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terms, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__terms_repeat1, 2, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__terms_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alias, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aliased_identifier, 3, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_calendar, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 3, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_from, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_by, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_limit, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_folder, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort_direction, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sort, 3, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_dataview(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
