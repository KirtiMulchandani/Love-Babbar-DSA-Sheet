#include <iostream>

using namespace std;


int sum(int *a, int n){
    
    if(n == 0)
        return 0;
        
    return a[0] + sum(a+1, n - 1);
}


int main()
{
    int a[] = {5,1,90,4,3};
    
    cout << "Sum: " << sum(a, 5);

    return 0;
}
