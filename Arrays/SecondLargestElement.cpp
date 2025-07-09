#include <iostream>
#include <vector>
using namespace std;

// Brute Force Method Using Two For Loops like an CaveMan
int secondLargest(vector<int> &arr, int n){
    int largest = arr[0];
    int secondLarge = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    } 
    for(int j = 0;j<n;j++){
        if(arr[j] == largest){

        }
        else if(arr[j]>secondLarge){
            secondLarge = arr[j];
        }
    }

    return secondLarge;
}

int main(){

    vector<int> arr = {1,2,4,7,7,5,6};
    int size = 7;

    cout<<secondLargest(arr,size);

    return 0; 
}