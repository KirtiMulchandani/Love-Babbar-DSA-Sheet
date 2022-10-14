#include <iostream>

using namespace std;

int powerOf2(int n){
    
    // base case
    if(n == 0)
        return 1;
        
    // recursive call
    return 2 * powerOf2(n-1);
}

int main()
{
    int n = 11;
    
    cout << powerOf2(n) << endl;

    return 0;
}
