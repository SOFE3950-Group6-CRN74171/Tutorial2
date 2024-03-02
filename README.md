# SOFE 3950U / CSCI 3020U: Operating Systems
## TUTORIAL #2: Introduction to C

### Objectives
- Learn the fundamentals of C
- Gain experience writing C programs

### Important Notes
- Work in groups of three students
- All reports must be submitted as a PDF on blackboard, if source code is included submit everything as an archive (e.g. zip, tar.gz)
- Save the conceptual questions file as `<tutorial_number>_<first student’s id>.pdf`

### Notice
It is recommended for this tutorial activity and others that you save/bookmark the following resources as they are very useful for C programming.
- [http://en.cppreference.com/w/c](http://en.cppreference.com/w/c)
- [http://www.cplusplus.com/reference/clibrary/](http://www.cplusplus.com/reference/clibrary/)
- [http://users.ece.utexas.edu/~adnan/c-refcard.pdf](http://users.ece.utexas.edu/~adnan/c-refcard.pdf)
- [http://gribblelab.org/CBootcamp](http://gribblelab.org/CBootcamp)

### Conceptual Questions
1. What are some of the benefits of the C language? Name an example where the C language is used (hint there are many!).
2. What is a compiler, what does it do?
3. What is a makefile, what does it do?
4. Name 5 header files from the C library and explain their purpose.
5. Lookup one function from each of the header files and put down the function name and describe what it does.

### Application Questions
All of your programs for this activity can be completed using the template provided, where you fill in the remaining content. A makefile is not necessary, to compile your programs use the following command in the terminal. If you do not have clang then replace clang with gcc.
``` bash
clang -Wall -Wextra -std=c99 <program name>.c -o <program name>
```
Example:
```bash
clang -Wall -Wextra -std=c99 question1.c -o question1
```
You can then execute and test your program by running it with the following command.
```bash
./<program name>
```
Example:
```bash
./question1
```
Template:
```bash
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
}
```
1. **Create a program that does the following**
   - Creates an array of 10 integer values from 1 to 10
   - Has a loop that iterates through the array and prints each integer in the array

2. **Create a program that does the following**
   - Creates an array of the following 5 double values 1.2, 5.5, 2.1, 3.3, 3.3
   - Checks if the current value is greater than, less than, or the same as the previous value and for each case prints either "greater than", "less than", or "the same"

3. **Create a program that does the following**
   - Has a string (character array) containing the words "hello world"
   - Performs an infinite loop that prints each character in the string until it reaches the end of the string (hint strings are terminated by something...)
   - Your resultant output should print the string "hello world"

4. **Create a program that does the following**
   - Loops from 1 to 10 (NOT 0 - 9)
   - Checks if the number is even or odd
   - Prints the number and the word "even" or "odd" based on whether the number is even or odd

5. **A bit of math, create a program that does the following**
   - Has a function called `euclid_dist` that takes two sets of vectors containing x and y that are integers and returns a double.
      ```c
      euclid_dist(x1, y1, x2, y2)
      ```
   - The function computes the euclidean distance between the two vectors containing x and y coordinates, you will need to lookup the documentation in math.h to calculate the euclidean distance.
   - The function returns the result of the calculation
   - The program then has a loop which does the following
      - Loops 10 times
      - Each time generates a random number between 0 and 100 for each x and y variable for the two vectors.
      - Calls the `euclid_dist` function and gets the results
      - Prints the two vectors and the euclidean distance to the console
   - Hint you will need to use the C reference site: [http://en.cppreference.com/w/c](http://en.cppreference.com/w/c) and look up the math.h and stdlib.h libraries for the mathematical functions and the rand() function, add `#include <math.h>` and `#include <stdlib.h>` to your file to use these functions.
   - In order to compile your program you will need to add the argument `-lm` which tells the compiler to link to the math library



