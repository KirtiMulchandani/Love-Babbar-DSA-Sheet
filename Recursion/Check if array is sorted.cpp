#include <iostream>

using namespace std;


bool isSorted(int *a, int n){
    
    if(n == 1 || n == 0){
        return true; 
    }
    
    if(a[0] < a[1])
        return false;
        
    else
        return isSorted(a+1, n-1);
    
}


int main()
{
    int a[] = {1, 2, 5, 4, 5};
    
    if(isSorted(a, 5))
        cout << "Sorted" << endl;
    else
        cout << "Not Sorted" << endl;

    return 0;
}
