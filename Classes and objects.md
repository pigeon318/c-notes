
## what is a class?

A class is a user-defined data type that acts as a blueprint for creating objects. An object is an instance of a class, just like `33` is an instance of `int`.

```cpp
class City {

}; // don't forget the semicolon
```

Classes are defined in header files. C++ was literally created to add classes to C — that's why it was originally called "C with Classes."

## class members 
you can get class members by using a . operator `object.class_member` there are 2 types of class member in c++ Attributes, also known as member consist of information and methods also known as member functions are functions that you can use with an instance of the class. you can enclose attributes and methods in a class like this:

```cpp
class City {

  // attribute
  int population;
  
public:
  // method
  void add_resident() {
    population++;
  }
};

```

It's common to declare methods inside the class in a header file, then define them separately in a `.cpp` file using `ClassName::` before the method name:

```cpp
// city.hpp
class City {
    int population;

public:
    int get_population();  // declaration
};
```

```cpp
// city.cpp
#include "city.hpp"

int City::get_population() {  // definition
    return population;
}
```

The `.cpp` file must `#include` the header. Any method declared in the class can access the class's attributes, even when defined in a separate file.

## creating objects

an object is an instance of a class which encapsulates data and to create an object we use the syntax, `class_name object_name;` and we can give the objects attributes values like this, `object_name.attribute_name = attribute_value;` and later we can access this value using a method we add to the class if its in the public part for example if we were doing a the population of a city we started in the object Newcastle and had defined a get population function that outputted the population from the attribute we could do `newcastle.get_population();`  wich would call our function with that object the code for that would look like:

in `main.cpp`
```cpp
City newcastle;
newcastle.population = 300000;
newcastle.get_population();  // returns 300000
```
in `city.hpp` 
```cpp
#include <iostream>

class City {
    int population;

public:
    void set_population(int pop);
    int get_population();
};
```
and in `city.cpp`
```cpp
#include "city.hpp"

void City::set_population(int pop) {
    population = pop;
}

int City::get_population() {
    return population;
}
```
# REFER TO CLASSES AND OBJECTS PT2 FOR CONTINUATION!
