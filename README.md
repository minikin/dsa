# Data Structures and Algorithms

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
