#include <iostream>

using namespace std;


void selectionSort(int *a, int n, int midInd){
    // base case
    if(midInd > n)
        return;
        
    int temp = midInd;
    
    for(int i = midInd; i < n; i++){
        if(a[i] < a[temp])
            temp = i;
    }
    
    swap(a[temp], a[midInd]);
    // recursive call
    return selectionSort(a, n, midInd+1);
}


int main()
{
    int a[] = {1, 10, 43, 11 ,4, 54, 24, 55, 0, 9};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    selectionSort(a, n, 0);
    
    cout << "Sorted Array: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
