// Problem: Return the index of Last Occurence of target element

// Approach
// -- Recursion
// -- call for i+1 first, if return -1 or not match then check for current element and return i;

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;

int LO(int arr[],int n,int i,int target){

    if(i==n){
        return -1;
    }

    int idx = LO(arr,n,i+1,target);

    if(arr[i]==target && idx==-1){
        return i;
    }

    return idx;
}


int main(){
    int arr[6]={1,2,3,3,3,5};
    cout<<LO(arr,6,0,3);

    return 0;
}