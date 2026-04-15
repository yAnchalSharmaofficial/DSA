// Problem: Calculate X to the power N

// Approach
// -- Recursion

// First Function
// - Base case: if n == 0 → return 1
// - Recursively compute x^(n-1)
// - Multiply result with x
// - Repeat until n becomes 0

// Second Function (Optimized – Binary Exponentiation)
// - Base case: if n == 0 → return 1
// - Recursively calculate x^(n/2)
// - Square the result
// - If n is odd → multiply by x


#include <iostream>
using namespace std;


// time-complexity=O(n)
// space-complexity=O(n)
int power(int x,int n){
    if(n==0){
        return 1;
    }
    return x*power(x,n-1);
}

// time-complexity=O(log n)
// space-complexity=O(log n)
int power2(int x,int n){

    if(n==0){
        return 1;
    }

    int halfpower = power2(x,n/2);
    int powersquare = halfpower*halfpower;

    if(n%2 != 0){
        return x*powersquare;
    }

    return powersquare;

}