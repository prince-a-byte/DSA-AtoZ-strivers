#Arrays

<h1>Questions On Arrays in Order:-</h1>

<h5>1.Largest Element in an Array</h5>
<p>Question:- Find the largest element in a given array without sorting.</p>

<h6>Optimal Approach Without Sorting Array</h6>

```cpp
int largestElement(vector<int> &arr, int n){
    
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}
```

<h6>Time Complexity</h6>

```
O(n)
```