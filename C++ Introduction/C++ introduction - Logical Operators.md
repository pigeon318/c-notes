[[C++ introduction - Conditionals]]

## Logical operators
Often, when we are trying to create a control flow for our program, we’ll encounter situations where the logic cannot be satisfied with a single condition

 logical operators are used to combine two or more conditions. They allow programs to make more flexible decisions. The result of the operation of a logical operator is a `bool` value of either `true` or `false`.

there are 3 main logical operators:
-  `&&`: the `and` logical operator
- `||`: the `or` logical operator
- `!`: the `not` logical operator

## The && (and) logical operator
the and logical operator returns the value `true` only if the conditions on both true
if not it returns false, here is the table:

| a     | b     | a && b |
| ----- | ----- | ------ |
| false | false | false  |
| false | true  | false  |
| true  | false | false  |
| true  | true  | true   |
for example `(1 <2 && 2 < 3)` would return true but `(1 <2 && 2 > 3)` would return false
(and can be used in place of &&)

## The ||(or) logical operator
the or logical operator (it is denoted by || not to be confused with lowercase L) returns true
when only 1 condition is true if no conditions are true it returns false, here is the table:

| a     | b     | a \| b |
| ----- | ----- | ------ |
| false | false | false  |
| false | true  | true   |
| true  | false | true   |
| true  | true  | true   |
for example - `( 1 < 2 || 2 > 3 )` returns `true` but - `( 1 > 2 || 2 > 3 )` returns `false`
(or can be used in place of ||)

## The !(not) logical operator
the not logical operator reverses the outcome of the expression that follows, here is the table:

|a|!a|
|---|---|
|false|true|
|true|false|
for example - `( !true )` returns `false`,   `( !false )` returns `true`   and `( !(10 < 11) )` returns `false` 
(not can be used in place of !)



