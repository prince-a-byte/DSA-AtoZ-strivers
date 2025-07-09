#DSA-AtoZ-strivers

<h1>This is a Repo for My DSA Journey from Start to end and i am doing DSA in C++ Language</h1>

<h2>Here i am going to store my all codes and notes of DSA</h2>

<h3>So lets Start</h3>

<h4>Day 1 - Arrays</h4>

<h5>Concepts</h5>

<p>Array is a data structure that store a collection of same type of data. Arrays are contiguous blocks of memory where each element is of same size. Each element in array is access by its index. Index starts from 0 and goes up to n-1.</p>

<h5>To Define a array we use:-</h5>

```cpp
int num[6] = {1,2,3,4,5,6}
```

<h5>Code Example</h5>

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    //Using the For Loop to print the array

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

<h5>Output</h5>

```
1 2 3 4 5
```

<h5>Time Complexity</h5>

```
O(n)
```


