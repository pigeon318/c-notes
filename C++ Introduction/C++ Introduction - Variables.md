[[C++ introduction - hello world]]
# Variables
in C++ there are 5 basic variable types:

- int - integer numbers(whole)
- double - decimal numbers
- char - a single character
- string - a sequence of characters
- bool - true/false

## how to declare a variable
to declare a variable the syntax is `variable type variablename;` 
so to declare the variable score which holds an integer it would be  int score;` 
 
after you have declared a variable you can give it a value with = so for our previous
score variable it would be `score = 3;` if we wanted to make it equal to 5 it would be `score = 5;`
and etc. 

in practice though you can declare and assign a variable in one line for our score example it would be `int score = 3;` 

## declaring a string
to declare a string you have to do `std::string name = "what the string is"`

## Arithmetic Operators

there are 5 main symbols that represent 5 arithmetic functions;

- + - addition
- -  subtraction
- * - multiplication
- / - division
- % - modulo (divides and gives remainder)
The order of operations can be specified using parentheses. For example, the use of parentheses in `score = 5 * (4 + 3)`  makes it so `score` equal to `5 * 7` rather than `20 + 3`.

## outputting a variable

to output a variable you would use `std::cout << score << "\n";`
for example to make a variable called score and do 1234 x 99 and then output it the code would be this:
```cpp
#include <iostream>
int main(){
  int score = 0;
  score = 1234 * 99;
  std::cout << score << "\n";
}
```

### chaining 
if you want to write multiple statements like hello i am variable years old you can chain all the cout statements in 1 line by using multiple << operators for example in :
```cpp
int age = 28;  
  std::cout << "Hello, I am " << age << " years old\n";
```


## User input
to ask a user input you would use `std::cin >> variablename` for input compared to `std::cout <<` for output
