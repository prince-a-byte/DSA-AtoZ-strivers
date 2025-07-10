#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[6] = {5,6,9,17,0,3};
    bool found = linearSearch(arr,6,-1);
    if(found)
    {
        cout<<"Element is found";
    }
    else
    {
        cout<<"Element is not Found";
    }
    return 0;
}