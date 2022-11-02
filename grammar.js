module.exports = grammar({
  name: 'amethyst',

  word: $ => $.identifier,

  rules: {
    source_file: $ => repeat($.sexpr),

    sexpr_call: $ => seq(
      '(',
      field('func', $.identifier),
      repeat(choice($.value, $.quoted, $.key)),
      ')'
    ),

    sexpr_not_call: $ => seq(
      '(',
      repeat(choice($.value, $.quoted, $.key)),
      ')'
    ),

    sexpr: $ => choice($.sexpr_call, $.sexpr_not_call),

    value: $ => choice($.number, $.character, $.boolean, $.string, $.sexpr, $.identifier),

    quoted: $ => seq('\'', $.value),

    identifier: $ => /:|[a-zA-Z\-_=+|\/?~!@$%^&*<>][0-9a-zA-Z\-_=+|\/?~!@$%^&*<>]*/,

    key: $ => /:[a-zA-Z\-_=+|\/?~!@$%^&*<>][0-9a-zA-Z\-_=+|\/?~!@$%^&*<>]*/,

    number: $ => /[0-9]+|0x[0-9a-fA-F]+|0b[01]+|0o[0-7]+|[0-9]+((\.[0-9]+)([eE][+\-]?[0-9]+)?|[eE][+\-]?[0-9]+)/,

    boolean: $ => choice('true', 'false'),

    string: $ => /"([^\\"]|\\.)*"/,

    character: $ => /'([^\\]|\\.)'/,

    block_comment: $ => seq(
      '/*',
      repeat(choice(/./, $.block_comment)),
      '*/'
    ),

    line_comment: $ => /\/\/.*\n/,
  },

  conflicts: $ => [[$.sexpr_call], [$.sexpr_call, $.sexpr_not_call]],

  extras: $ => [/\s|\n/, $.line_comment, $.block_comment],

  inline: $ => [$.value, $.sexpr],
});
