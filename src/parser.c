#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 19
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  sym_identifier = 1,
  anon_sym_LPAREN = 2,
  anon_sym_RPAREN = 3,
  anon_sym_SQUOTE = 4,
  sym_key = 5,
  sym_number = 6,
  anon_sym_true = 7,
  anon_sym_false = 8,
  sym_string = 9,
  sym_character = 10,
  anon_sym_SLASH_STAR = 11,
  aux_sym_block_comment_token1 = 12,
  anon_sym_STAR_SLASH = 13,
  sym_line_comment = 14,
  sym_source_file = 15,
  sym_sexpr_call = 16,
  sym_sexpr_not_call = 17,
  sym_quoted = 18,
  sym_boolean = 19,
  sym_block_comment = 20,
  aux_sym_source_file_repeat1 = 21,
  aux_sym_sexpr_call_repeat1 = 22,
  aux_sym_block_comment_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [sym_key] = "key",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_string] = "string",
  [sym_character] = "character",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_line_comment] = "line_comment",
  [sym_source_file] = "source_file",
  [sym_sexpr_call] = "sexpr_call",
  [sym_sexpr_not_call] = "sexpr_not_call",
  [sym_quoted] = "quoted",
  [sym_boolean] = "boolean",
  [sym_block_comment] = "block_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_sexpr_call_repeat1] = "sexpr_call_repeat1",
  [aux_sym_block_comment_repeat1] = "block_comment_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_key] = sym_key,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_string] = sym_string,
  [sym_character] = sym_character,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_line_comment] = sym_line_comment,
  [sym_source_file] = sym_source_file,
  [sym_sexpr_call] = sym_sexpr_call,
  [sym_sexpr_not_call] = sym_sexpr_not_call,
  [sym_quoted] = sym_quoted,
  [sym_boolean] = sym_boolean,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_sexpr_call_repeat1] = aux_sym_sexpr_call_repeat1,
  [aux_sym_block_comment_repeat1] = aux_sym_block_comment_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_sexpr_call] = {
    .visible = true,
    .named = true,
  },
  [sym_sexpr_not_call] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sexpr_call_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_func = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_func] = "func",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_func, 1},
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
  [6] = 2,
  [7] = 4,
  [8] = 8,
  [9] = 3,
  [10] = 5,
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
  [22] = 22,
  [23] = 21,
  [24] = 22,
  [25] = 25,
  [26] = 12,
  [27] = 17,
  [28] = 28,
  [29] = 29,
  [30] = 18,
  [31] = 11,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 28,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || c == '-'))
    : (c <= 'Z' || (c < '|'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '9')))
    : (c <= 'Z' || (c < '|'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < '<'
    ? (c < '+'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '0'
        ? c == '-'
        : c <= '9')))
    : (c <= 'Z' || (c < '|'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '0'
        ? c == '-'
        : c <= '9')))
    : (c <= 'Z' || (c < '|'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static inline bool sym_key_character_set_1(int32_t c) {
  return (c < '<'
    ? (c < '*'
      ? (c < '$'
        ? c == '!'
        : c <= '&')
      : (c <= '+' || (c < '/'
        ? c == '-'
        : c <= '/')))
    : (c <= 'Z' || (c < '|'
      ? (c < 'a'
        ? (c >= '^' && c <= '_')
        : c <= 'z')
      : (c <= '|' || c == '~'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 6:
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (lookahead == '!' ||
          ('$' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          ('<' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^' ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '|' ||
          lookahead == '~') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '/') ADVANCE(24);
      if (lookahead == '0') ADVANCE(29);
      if (lookahead == ':') ADVANCE(22);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(27);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == '/') ADVANCE(5);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\n') ADVANCE(46);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(23);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '*') ADVANCE(39);
      if (lookahead == '/') ADVANCE(23);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(45);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_key_character_set_1(lookahead)) ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_key);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'b') ADVANCE(8);
      if (lookahead == 'o') ADVANCE(11);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(38);
      if (lookahead == '/') ADVANCE(1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(27);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_line_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 17},
  [20] = {.lex_state = 17},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {(TSStateId)(-1)},
  [35] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_sexpr_call] = STATE(32),
    [sym_sexpr_not_call] = STATE(32),
    [sym_block_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(2),
    [aux_sym_sexpr_call_repeat1] = STATE(9),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(16),
    [anon_sym_RPAREN] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [sym_key] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [sym_string] = ACTIONS(25),
    [sym_character] = ACTIONS(25),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(3),
    [aux_sym_sexpr_call_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(4),
    [aux_sym_sexpr_call_repeat1] = STATE(10),
    [sym_identifier] = ACTIONS(43),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(45),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(5),
    [aux_sym_sexpr_call_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(47),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(6),
    [aux_sym_sexpr_call_repeat1] = STATE(3),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(16),
    [anon_sym_RPAREN] = ACTIONS(49),
    [anon_sym_SQUOTE] = ACTIONS(22),
    [sym_key] = ACTIONS(25),
    [sym_number] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(28),
    [anon_sym_false] = ACTIONS(28),
    [sym_string] = ACTIONS(25),
    [sym_character] = ACTIONS(25),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [7] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(7),
    [aux_sym_sexpr_call_repeat1] = STATE(5),
    [sym_identifier] = ACTIONS(52),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(54),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [8] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(8),
    [aux_sym_sexpr_call_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(56),
    [anon_sym_LPAREN] = ACTIONS(59),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_SQUOTE] = ACTIONS(64),
    [sym_key] = ACTIONS(67),
    [sym_number] = ACTIONS(67),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [sym_string] = ACTIONS(67),
    [sym_character] = ACTIONS(67),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [9] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(9),
    [aux_sym_sexpr_call_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [10] = {
    [sym_sexpr_call] = STATE(13),
    [sym_sexpr_not_call] = STATE(13),
    [sym_quoted] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_block_comment] = STATE(10),
    [aux_sym_sexpr_call_repeat1] = STATE(8),
    [sym_identifier] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(37),
    [sym_key] = ACTIONS(39),
    [sym_number] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(39),
    [sym_character] = ACTIONS(39),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [11] = {
    [sym_block_comment] = STATE(11),
    [sym_identifier] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(77),
    [sym_key] = ACTIONS(79),
    [sym_number] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [sym_string] = ACTIONS(79),
    [sym_character] = ACTIONS(79),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [12] = {
    [sym_block_comment] = STATE(12),
    [sym_identifier] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(81),
    [sym_key] = ACTIONS(83),
    [sym_number] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [sym_string] = ACTIONS(83),
    [sym_character] = ACTIONS(83),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [13] = {
    [sym_block_comment] = STATE(13),
    [sym_identifier] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(85),
    [sym_key] = ACTIONS(87),
    [sym_number] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [sym_string] = ACTIONS(87),
    [sym_character] = ACTIONS(87),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [14] = {
    [sym_block_comment] = STATE(14),
    [sym_identifier] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(89),
    [sym_key] = ACTIONS(91),
    [sym_number] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [sym_string] = ACTIONS(91),
    [sym_character] = ACTIONS(91),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [15] = {
    [sym_sexpr_call] = STATE(16),
    [sym_sexpr_not_call] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_block_comment] = STATE(15),
    [sym_identifier] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(33),
    [sym_number] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [sym_string] = ACTIONS(95),
    [sym_character] = ACTIONS(95),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [16] = {
    [sym_block_comment] = STATE(16),
    [sym_identifier] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(97),
    [sym_key] = ACTIONS(99),
    [sym_number] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [sym_string] = ACTIONS(99),
    [sym_character] = ACTIONS(99),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [17] = {
    [sym_block_comment] = STATE(17),
    [sym_identifier] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(101),
    [sym_key] = ACTIONS(103),
    [sym_number] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
    [sym_string] = ACTIONS(103),
    [sym_character] = ACTIONS(103),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
  [18] = {
    [sym_block_comment] = STATE(18),
    [sym_identifier] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(105),
    [sym_key] = ACTIONS(107),
    [sym_number] = ACTIONS(107),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [sym_string] = ACTIONS(107),
    [sym_character] = ACTIONS(107),
    [anon_sym_SLASH_STAR] = ACTIONS(3),
    [sym_line_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
    ACTIONS(111), 1,
      anon_sym_LPAREN,
    STATE(19), 2,
      sym_block_comment,
      aux_sym_source_file_repeat1,
    STATE(32), 2,
      sym_sexpr_call,
      sym_sexpr_not_call,
  [21] = 7,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(9), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(20), 1,
      sym_block_comment,
    STATE(32), 2,
      sym_sexpr_call,
      sym_sexpr_not_call,
  [44] = 6,
    ACTIONS(116), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(118), 1,
      aux_sym_block_comment_token1,
    ACTIONS(120), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(122), 1,
      sym_line_comment,
    STATE(21), 1,
      sym_block_comment,
    STATE(24), 1,
      aux_sym_block_comment_repeat1,
  [63] = 6,
    ACTIONS(116), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      aux_sym_block_comment_token1,
    ACTIONS(126), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      sym_block_comment,
    STATE(25), 1,
      aux_sym_block_comment_repeat1,
  [82] = 6,
    ACTIONS(116), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      sym_line_comment,
    ACTIONS(128), 1,
      aux_sym_block_comment_token1,
    ACTIONS(130), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      aux_sym_block_comment_repeat1,
    STATE(23), 1,
      sym_block_comment,
  [101] = 6,
    ACTIONS(116), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(122), 1,
      sym_line_comment,
    ACTIONS(124), 1,
      aux_sym_block_comment_token1,
    ACTIONS(132), 1,
      anon_sym_STAR_SLASH,
    STATE(24), 1,
      sym_block_comment,
    STATE(25), 1,
      aux_sym_block_comment_repeat1,
  [120] = 5,
    ACTIONS(122), 1,
      sym_line_comment,
    ACTIONS(134), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(137), 1,
      aux_sym_block_comment_token1,
    ACTIONS(140), 1,
      anon_sym_STAR_SLASH,
    STATE(25), 2,
      sym_block_comment,
      aux_sym_block_comment_repeat1,
  [137] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_block_comment,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [151] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [165] = 3,
    ACTIONS(122), 1,
      sym_line_comment,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(142), 3,
      anon_sym_SLASH_STAR,
      aux_sym_block_comment_token1,
      anon_sym_STAR_SLASH,
  [177] = 3,
    ACTIONS(122), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(144), 3,
      anon_sym_SLASH_STAR,
      aux_sym_block_comment_token1,
      anon_sym_STAR_SLASH,
  [189] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [203] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [217] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
  [231] = 4,
    ACTIONS(5), 1,
      sym_line_comment,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(148), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_block_comment,
  [244] = 1,
    ACTIONS(150), 1,
      ts_builtin_sym_end,
  [248] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(19)] = 0,
  [SMALL_STATE(20)] = 21,
  [SMALL_STATE(21)] = 44,
  [SMALL_STATE(22)] = 63,
  [SMALL_STATE(23)] = 82,
  [SMALL_STATE(24)] = 101,
  [SMALL_STATE(25)] = 120,
  [SMALL_STATE(26)] = 137,
  [SMALL_STATE(27)] = 151,
  [SMALL_STATE(28)] = 165,
  [SMALL_STATE(29)] = 177,
  [SMALL_STATE(30)] = 189,
  [SMALL_STATE(31)] = 203,
  [SMALL_STATE(32)] = 217,
  [SMALL_STATE(33)] = 231,
  [SMALL_STATE(34)] = 244,
  [SMALL_STATE(35)] = 248,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(13),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(7),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(31),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(15),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(13),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(14),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 1), SHIFT(11),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 2), SHIFT_REPEAT(13),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 2), SHIFT_REPEAT(7),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 2), SHIFT_REPEAT(15),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 2), SHIFT_REPEAT(13),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 2), SHIFT_REPEAT(14),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexpr_call, 3, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexpr_call, 3, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexpr_not_call, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexpr_not_call, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_sexpr_call_repeat1, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_sexpr_call_repeat1, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexpr_call, 4, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexpr_call, 4, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sexpr_not_call, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sexpr_not_call, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(21),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2), SHIFT_REPEAT(25),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_comment_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [148] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_amethyst(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
