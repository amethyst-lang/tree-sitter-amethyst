(number) @number
(boolean) @constant.builtin
(character) @constant
(string) @string
(line_comment) @comment
(block_comment) @comment
(sexpr_call "(" @punctuation.bracket func: (identifier) @function (_)* ")" @punctuation.bracket)
(sexpr_not_call "(" @punctuation.bracket (_)* ")" @punctuation.bracket)
(key) @property