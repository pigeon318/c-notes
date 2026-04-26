[[C++ Loops - Loops]]

## What is a vector?
a vector is arguably the most useful, ways of storing data in C++: A vector is a sequence of elements that you can access by index

## creating a vector
to create a vector first we need to import the `<vector>` heading so we need to add `#include <vector>` to the top of the program, the syntax to create a vector is `std::vector<type> name;`
inside the angles brackets is the data type(this cant be changed after declaring) and after the angle brackets is the name of the vector

## initializing the vector
to initialize the vector you can do it like you would a normal variable where you declare and initialize the vector in one line using the syntax `std::vector<type> name = {data1,data2,data3...etc};` you can also initialize a vector in which you don't know the variables value but know the amount with the syntax `std::vector<type> name(amount of variables);` and you can set them to a default value with `std::vector<type> name(amount of variables, default_value);`

## index
An _index_ refers to an element’s position within an ordered list Vectors
are 0-indexed, meaning the first element has index 0, the second index 1, and so on. to output a specific index you can do `std::cout << vectorname[indexposition];` so to reference/use a index you just do `Vector_name[position]`

## Adding and removing elements
to add a new element to the end of the vector you can use the `.push_back()`  function so lets say you wanted to add a new hobby to a vector of the users interests you would; do `interests.push_back("Amature radio");` which would add the string `Amature radio`
to the end of the interests vector you can also remove the last element of a vector using the `.pop_back();` function **nothing needs to go inside the brackets!** 

## .size()
`std::vector` not only stores the elements of a vector it also stores the size of the vector and the .size() function returns the number of elements in the vector and you can output the size of a vector with `std::cout << vectorname.size() << "\n"`

## operations

 when you want to change each of the values within a vector. You can use a `for` loop
 For example, suppose we have an `int` vector that looks like this:
 10, 20 ,30

![1](https://content.codecademy.com/courses/learn-cpp/vectors/operations1.png)

You can write a `for` loop that iterates from `0` to `vector.size()`. And here’s the cool part: you can use the counter of the `for` loop as the index! Woah.

```
for (int i = 0; i < vector.size(); i++) {  vector[i] = vector[i] + 10;}
```

This will change the vector to:
20,30,40

![2](https://content.codecademy.com/courses/learn-cpp/vectors/operations2.png)

Here, we incremented `i` from `0` to `vector.size()`, which is 3. During each iteration, we are adding 10 to the element at position `i`:

- When `i = 0`, we added 10 to `vector[0]`
- When `i = 1`, we added 10 to `vector[1]`
- When `i = 2`, we added 10 to `vector[2]`

