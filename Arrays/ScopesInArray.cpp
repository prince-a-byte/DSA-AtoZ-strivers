#include <iostream>
using namespace std;

// Note:- Whenever we pass an array in the function what it actually 
// does is it give the address of the original array in the function 
// so if you try to change the array in the function it will also change it the main() function.
void updateFunction(int arr[], int size)
{
    arr[0] = 20;
    cout<<"Entering the Update Function:- "<<endl;
    for(int i=0; i<size;i++)
    {
        cout<<arr[i];
    }cout<<endl;
    cout<<"Entering the main function:- "<<endl;

}

int main()
{
    int arr[3] = {1,2,3};
    updateFunction(arr,3);
    cout<<"printing the array:- "<<endl;
    for(int i=0; i<3;i++)
    {
        cout<<arr[i];
    }cout<<endl;

    // Note:- never change your array inside the function or it will be changed in the main function as well.
    return 0;
}