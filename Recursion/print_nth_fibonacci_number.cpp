// Problem: Print number in decreasing order from n to 1 

// Approach
// -- Recursion
// -- Print Number and call for previous number

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;

int  fib(int n){
    if(n==0 || n==1){        
        return n;
    }

    return fib(n-1)+fib(n-2);
}


int main(){

    cout<<fib(5)<<endl;

    return 0;
}