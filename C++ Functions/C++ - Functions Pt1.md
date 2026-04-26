[[C++ - Vectors]]



## what are functions and what do they do?
functions are blocks of code yo can quickly use over and over again in your program that you can write once and then call easily 

## Declaring and defining functions

A c++ function is made up of 2 parts, the declaration which includes name, return type and parameters and the definition that contains the actual code, this is an example of the structure of a function:
```cpp
return_type function_name( any, parameters, you, have ) {

   code_here

   return output_if_there_is_any;

}

```


## Void
A void function is a function that has no output meaning it is good for when you have functions that just print text to the terminal. and they look like this: 
```cpp
 void function name(){
    std::cout << "whatever it is you want outputed";
 }
```

## Return types
a function can return most datatypes I've previously mentioned such as `bool`, `double`, `char`, `std::string` and `std::vector` for example
```cpp
std::string always_blue() {  
  
  return "blue!\n";  
  std::cout << "Returned blue!";
  
}
```
will return `blue!` **the return statement is the last line a function will execute** so in our example only `blue!` and not returned blue will be executed.

## how return values work
When functions have a return type other than `void`, the function has two new requirements:

- There must be a value returned from the function.
- The return value must be the same type as the function’s return type.

But where does the return value get returned to? It gets returned to the place where the function is called simple.

## parameters and arguments
parameters are the variables in a function's definition that act as placeholders. Arguments are the actual values you pass in when you call the function.
for example:

```cpp
double get_tip(double price) {  // price is the parameter
    return price * 0.2;
}

double tip = get_tip(15.75);  // 15.75 is the argument
```


## multiple arguments
**Multiple parameters** — functions can take multiple parameters, separated by commas. The order matters — arguments must match the parameter order when calling the function.


```cpp
double get_tip(double price, double tip, bool total_included) {
    if (total_included) {
        return price * tip + price;
    } else {
        return price * tip;
    }
}

get_tip(45.50, 0.25, true);  // correct order
get_tip(0.25, true, 45.50);  // wrong order, won't work
```


## how functions and parameters work
A function with parameters has a couple of requirements:

- The function call must include the **same number** of arguments as there are parameters.
- The corresponding arguments must be passed in the **same order**.

By calling a function with arguments, you are telling a function, “Hey function, when you execute, use these values where you have parameters in your definition.”

While it executes, anywhere the function comes across a parameter, it replaces the parameter with the corresponding argument you gave it.
