#include <iostream>
#include <vector>
using namespace std;

//Optimal Solutions for finding the largest element
int largestElement(vector<int> &arr, int n){
    
    int largest = arr[0];

    for(int i = 0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    
    
    vector<int> arr = {1,45,32,78,12,45,32,36,1,5,8};
    int size = 11;
    cout<<largestElement(arr,size); 


    return 0;
}