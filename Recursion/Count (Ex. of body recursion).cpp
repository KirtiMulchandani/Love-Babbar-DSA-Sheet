#include <iostream>

using namespace std;

void count(int n){
    // base case
    if(n == 0)
        return;

    // body recursion
    count(n-1);
    cout << n << " ";
}

int main()
{
    int n = 10;
    
    count(n);

    return 0;
}
