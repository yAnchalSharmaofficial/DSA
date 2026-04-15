// Problem: Return sum of n natural number

// Approach
// -- Recursion
// -- call for n-1 and add n to answer

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;

int Nsum(int n){
    if(n==0){
        return 0;
    }
    return n+Nsum(n-1);
}


int main(){

    cout<<Nsum(5)<<endl;

    return 0;
}