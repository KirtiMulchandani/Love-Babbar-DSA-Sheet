#include <iostream>

using namespace std;

int fact(int n){
    // base case
    if(n == 1)
        return 1;
    
    // recursive call
    return n * fact(n-1);
}

int main()
{
    int n = 8;
    
    cout << fact(n) << endl;

    return 0;
}
