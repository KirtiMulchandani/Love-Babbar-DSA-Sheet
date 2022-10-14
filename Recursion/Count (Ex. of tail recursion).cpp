#include <iostream>

using namespace std;

void count(int n){
    // base case
    if(n == 0)
        return;
    
    cout << n << " ";
    
    // tail recursion
    count(n-1);
    
}

int main()
{
    int n = 10;
    
    count(n);

    return 0;
}
