// Problem: Print number in increasing order from 1 to n 

// Approach
// -- Recursion
// -- call for previous number and Print Number 

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;

void inc_order(int n){

    if(n==0){
        return;
    }    
    inc_order(n-1);
    cout<<n<<endl;

};

int main(){

    inc_order(5);  

    return 0;
}