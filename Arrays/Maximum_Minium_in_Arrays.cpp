#include <iostream>
using namespace std;

// Creating a function to print Arrays
void printArrays(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"The element is:- "<<arr[i]<<endl;
    }
}

void takingInput(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

// Creating a function to find maximum in an array
int maximumOfArray(int arr[], int size)
{
    int ans = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>ans)
        {
            ans = arr[i];
        }
    }
    return ans;
}

// Function to find minium of an array
int miniumOfArray(int arr[], int size)
{
    int ans = arr[0];
    for(int i=0;i<size;i++)
    {
        if(ans>arr[i])
        {
            ans = arr[i];
        }
    }
    return ans;
}

int main(){

    int size;
    cin>>size;

    int arr[100];
    takingInput(arr,size);

    cout<<"The Maximum in that array is:- "<<maximumOfArray(arr,size)<<endl;
    cout<<"The Minium in that array is:- "<<miniumOfArray(arr,size)<<endl;

    return 0;
}