[[C++ - Functions Pt1]]

## scopes
A scope is the region of code that can access or view a given element, variables defined in the global scope(outside of a function or main) are accessible through the entire program whereas variables defined in a function have a local scope meaning only that function can access them.

## Multi-file programs

As programs grow, you can split your code across multiple `.cpp` files. Move function definitions into a separate file and keep declarations in your main file.


```cpp
// main.cpp
#include <iostream>

void eat();  // declaration

int main() {
    eat();
}
```


```cpp
// my_functions.cpp
#include <iostream>

void eat() {  // definition
    std::cout << "nom nom nom\n";
}
```

To compile them together:
```bash
g++ main.cpp my_functions.cpp
```

The compiler links all listed files into one executable so `main.cpp` can use functions defined in other files.

## Headers
instead of having to manually declare functions like `  double average(double num1, double num2);` for every file you use them in you can take those function declarations and move them all over to a _header file_, another file — usually with the same name as the file with all of the function definitions — with the extension **.hpp** or **.h**. For example, if your function definitions are in **my_functions.cpp**, the corresponding header file would be **my_functions.hpp** or **my_functions.h**.
and to import it you do `#include "functions.h/hpp` 

## Inline functions

The `inline` keyword tells the compiler to insert the function's body directly where it's called instead of doing a normal function call. It can sometimes improve speed but not always.


```cpp
inline void eat() {
    std::cout << "nom nom\n";
}
```

Always use the `inline` keyword when putting function definitions in header files. The exception is member functions inside classes — those are automatically inlined.

In practice, you'll probably encounter `inline` but rarely need to use it yourself.


## Default arguments
You can give parameters default values so you don't have to pass them every time. Set the default in the declaration:
```cpp
void intro(std::string name, std::string lang = "C++");
```

If you don't pass the second argument, it uses the default:


```cpp
intro("James");          // uses "C++" as lang
intro("James", "Rust");  // uses "Rust" as lang
```

Important: parameters without defaults must come first. This works:
```cpp
int add_nums(int num1, int num2 = 0);
```

This doesn't:

```cpp
int add_nums(int num1 = 0, int num2);  // broken
```

The computer assigns arguments by order, so it can't skip the first to fill the second.

## function overloading
if you want a function that can accept an argument that id for example able to accept an int or a double you can use a technique called function overloading, this is where you give multiple functions the same name and works as long as 1 of these two conditions is true:

- each has different type parameters
- each has a different number of parameters

## function templates 
a function _template_ is a C++ tool that allows programmers to add data types as parameters. This feature comes in handy for classes as well as for functions. In fact, `std::string` and `std::vector` are both template-based types. The C++ standard library is full of templates!

### how to build a template?
Templates let you write one function that works with any data type. They're defined in header files using `template <typename T>`:

```cpp
template <typename T>
void print_item(T item) {
    std::cout << item << "\n";
}

print_item(42);        // works with int
print_item("hello");   // works with string
print_item(3.14);      // works with double
```

`T` is a placeholder — the compiler replaces it with whatever type you pass in. You can think of T as "thing."

Templates slow down compile time but speed up execution time. The type you use must support whatever operations the function does — for example you can't pass a `std::vector` to a function that uses `<<`.

