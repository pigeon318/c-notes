[[C++ Introduction - Variables]]

## if statement

and if statement is used to test an expression for truth and execute code based on it, the syntax is;
```cpp
if (condition) {
 some code 
 }
```
if the statement is `true` then the code s executed, if not it is skipped

## relational operators
in C++ there are 6 relational operators:
- `==` equal to
- `!=` not equal to
- `>` greater than
- `<` less than
- `>=` greater than or equal too
- `<=` less than or equal to
relational operators compare the values on the left with the value on the right

## else clause
an else clause is basically the inverse of an if statement that comes after an if statement a else clause only executes if the if statement is false an example of this would be:
```cpp
if (coin == 1) {
  std::cout << "Heads\n";
}
else {
  std::cout << "Tails\n";
}

```

## else if
else if statements are used when you have multiple possible outcomes usually over the ammount
of 2 . The `else if` statement always comes after the `if` statement and before the `else` statement. The `else if` statement also takes a condition. here is an example of 3 else if statements: 
```cpp
if (grade == 9) {
  std::cout << "Freshman\n";
} 
else if (grade == 10) {  
  std::cout << "Sophomore\n";  
}
else if (grade == 11) {
  std::cout << "Junior\n";  
} 
else if (grade == 12) {  
  std::cout << "Senior\n";
}
else {
  std::cout << "Super Senior\n";
}
```

## Switch statement


A switch statement provides an alternative syntax that is easier to read and write. However, you are going to find these less frequently than `if`, `else if`, `else` in the wild.

A `switch` statement looks like this:

```cpp
switch (grade) {  
  case 9:    std::cout << "Freshman\n";
      break;  
  case 10:    std::cout << "Sophomore\n";
      break;
  case 11:    std::cout << "Junior\n";
      break;
  case 12:    std::cout << "Senior\n"; 
       break;  
  default:    std::cout << "Invalid\n";
      break;
    }
```

- The `switch` keyword initiates the statement and is followed by `()`, which contains the value that each case will compare. In the example, the value or expression of the switch statement is `grade`. One restriction on this expression is that it must evaluate to an integral type (`int`, `char`, `short`, `long`, `long long`, or 
    
    enum)
- Inside the block, `{}`, there are multiple cases.
- The `case` keyword checks if the expression matches the specified value that comes after it. The value following the first case is `9`. If the value of `grade` is equal to `9`, then the code that follows the `:` would run.
- The `break` keyword tells the computer to exit the block and not execute any more code or check any other cases inside the code block.
- At the end of each switch statement, there is a `default` statement. If none of the cases are `true`, then the code in the `default` statement will run. It’s essentially the `else` part.
