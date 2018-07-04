# Data Structures and Algorithms

## Hints

g++ -pipe -O2 -std=c++11 file.cpp
cpplint 'file name'

execution time:

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