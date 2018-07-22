# Data Structures and Algorithms


## Algorithmic Toolbox

- [Small Fibonacci Number]()
- [The Last Digit of a Large Fibonacci Number]()
- [Greatest Common Divisor]()
- [Least Common Multiple]()
- [Huge Fibonacci Number modulo m]()


### Greedy algorithms

- [Changing Money]()
- [Fractional Knapsack]()
- [Covering Segments by Points]()
- [Pairwise Distinct Summands]()

### Divide and conquer

- [Binary Search]()
- [Majority Element]()
- [Sorting: 3-Way Partition]()
- [Number of Inversions]()
- [Points and Segments]()

### Dynamic programming

- [Primitive Calculator]()
- [Take as Much Gold as Possible]()
- [Compute the Edit Distance Between Two Strings]()
- [Maximize the Value of an Arithmetic Expression]()
- [Longest Common Subsequence of Three Sequences]()


## Hints

__Compile__

```bash

g++ -pipe -O2 -std=c++11 file.cpp

```

__Lint__

```bash
cpplint 'file name'

```

__Measure execution time__

```c++

#include <iostream>
#include <ctime>
#include <cstdio>

time_t begin,end; // time_t is a datatype to store time values.

time (&begin); // note time before execution
function();
time (&end); // note time after execution

double difference = difftime (end,begin);
printf ("time taken for function() %.2lf seconds.\n", difference );

```
