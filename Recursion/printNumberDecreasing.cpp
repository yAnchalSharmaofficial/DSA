// Problem: Print number in decreasing order from n to 1 

// Approach
// -- Recursion
// -- Print Number and call for previous number

// TC : O(n)
// SC : O(n) --> due to rercusive stack space

#include <iostream>
using namespace std;


void dec_order(int n){

    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec_order(n-1);

}


int main(){

    dec_order(5);  

    return 0;
}