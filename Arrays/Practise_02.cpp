// Reversing an array:- 
#include <iostream>
using namespace std;

// Brute Force Method
void reverseArrayBrute(int arr[],int size)
{
    int temp[size];
    
    for(int i=0;i<size;i++)
    {
        temp[i] = arr[size-i-1];
    }

    for(int j=0; j<size;j++)
    {
        cout<<temp[j]<<",";
    }
}


// Better Method
void reverseArray(int arr[],int size)
{
    for(int i=0;i<(size/2);i++)
    {
        swap(arr[i], arr[size - i - 1]);
    }

    for(int j = 0;j<size;j++)
    {
        cout<<arr[j]<<",";
    }
}

// Better method using while loop:-

void reverseArray2(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;

    reverseArray2(arr,size);
    for(int i = 0; i<size;i++)
    {
        cout<<arr[i]<<",";
    }

    

    return 0;
}