// Problem: Check if array is sorted

// Approach
// -- Recursion
// -- call for i+1 and check until i != last index of array

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;


bool IsSorted(int arr[],int n,int i){
    if(i==n-1){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return IsSorted(arr,n,i+1);
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,4,3,5};
    cout<<IsSorted(arr1,5,0);
    cout<<IsSorted(arr2,5,0);

    return 0;
}



