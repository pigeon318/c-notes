[[C++ introduction - Logical Operators]]
## While loop
The `while` loop looks very similar to an `if` statement. And just like an `if` statement, it executes the code inside of it if the condition is `true`.

However, the difference is that the `while` loop will continue to execute the code inside of it, _over and over again_, as long as the condition is `true`. This is what a while loop looks like:
```cpp
while (condition) {
 statements 
 }
```

so basically instead of executing if the condition is true it executes while the condition is true
This is what a while loop would look like if implemented into a guessing program:
```cpp
while (guess != 8) {
  
  std::cout << "Wrong guess, try again: ";
  std::cin >> guess;

}

```
to add a stop to your loop you can do something such as declareing a variable like runs/loop_time and at the end of your loop you can do something like `runs++;` wich adds 1 to the variable one and in the conditions in your loop you can do `(your_condition && runs < 40)` wich limits the amount of runs to 40

an example of a program that works out the first 10 square numbers is:
```cpp
  #include <iostream>
int main() {
  int i = 0;
  int square = 0;
  while (i < 10) {
    square = i * i;
    std::cout << i << ")" << " " << square << "\n";
    i++;
  }
}
```

## for loop

When we know exactly how many times we want to iterate (or when we are counting), we can use a `for` loop instead of a `while` loop:
```cpp
for (int i = 0; i < amount_you_want_repeated; (increment))  
{  
  
  code you want executed  
  
}
```
the first line `for (int i = 0; i < amount_you_want_repeated; increment)`
is 3 separate parts separated by a `;`:
- the initializing of a counter: `int i = 0`
- the continue condition `i < 20` (i is less than or equal too 20 (repeats 20 times))
- The change in the counter `i++` (1 increment)

