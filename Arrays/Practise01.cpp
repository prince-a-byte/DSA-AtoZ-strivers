// In this problem you were given an array and you have to find the sum of every element in that array:-
// Instruction:- 
// 1. make an array and take input from the user
// 2. Print the sum of every Element

// Solution:- 
#include<iostream>
using namespace std;

int sumArray(int arr[], int size)
{
    int sum = 0;
    
    for(int i = 0; i<size;i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    //Taking Input:- 
    int arr[100];
    int size;

    cout<<"Enter The Size of array:-"<<endl;
    cin>>size;

    cout<<"Enter the elements of array:- "<<endl;
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"The Sum of the elements of array is:- "<<sumArray(arr,size);

    return 0;
}