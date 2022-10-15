#include <iostream>

using namespace std;

double calPow(double x, long long n){
    if(n == 0)
        return 1;
    if(n == 1)
        return x;
        
    // for calculating x^n/2 
    double ans = calPow(x, n/2);
        
    if(n & 1)  //if n is odd we have to return  x * ans * ans i.e., x * x ^ n/2 * x ^ n/2
        return x * ans * ans;
    else
        return ans * ans; //otherwise return x ^ n/2 * x ^ n/2
}
    
double myPow(double x, int n) {
    long long n1 = n;  // if n is negative no then we need to make it +ve, but normal int variable cannot store 2147483648 as +ve so we are supposed to use long long int
   if(n1 < 0)
       return 1/calPow(x, -n1); //if n is -ve, we need to return 1/ans
    else
        return calPow(x, n1);
}



int main()
{
    double x = 2.00000;
    int n = -2;
    
    cout << myPow(x, n);
    
    return 0;
}


/* T.C.: O(logn) */
