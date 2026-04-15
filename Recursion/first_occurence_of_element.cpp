// Problem: Return the index of First Occurence of target element

// Approach
// -- Recursion
// -- first check if not found then call for i+1

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;

int FO(int arr[],int n,int i,int target){

    if(i==n-1){
        return -1;
    }

    if(arr[i]==target){
        return i;
    }

    return FO(arr,n,i+1,target);
}


int main(){
    int arr[6]={1,2,3,3,3,5};
    cout<<FO(arr,6,0,3);

    return 0;
}
