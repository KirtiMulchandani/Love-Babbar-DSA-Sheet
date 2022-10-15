#include <iostream>

using namespace std;


bool linearSearch(int *a, int n, int k){
    if(n == 0)
        return false;
        
    if(a[0] == k)
        return true;
        
    else
        return linearSearch(a+1, n-1, k);
        
}


int main()
{
    int a[] = {10, 9, 6, 4, 5};
    int k = 5;
    
    if(linearSearch(a, 5, k))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
