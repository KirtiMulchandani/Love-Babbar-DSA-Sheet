#include <iostream>

using namespace std;


void bubbleSort(int *a, int n){
    // base case
    if(n == 0 || n == 1)
        return;
        
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1])
            swap(a[i], a[i+1]);
    }
    
    // recursive call
    return bubbleSort(a, n-1);
}


int main()
{
    int a[] = {1, 10, 43, 11 ,4, 54, 24, 55, 0, 9};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    bubbleSort(a, n);
    
    cout << "Sorted Array: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
