#include <iostream>

using namespace std;

void insertionSort(int *a, int n, int index){
    
    // base case
    if(index >= n)
        return;
        
    int temp = a[index];    
        
    int j;
    
    for(j = index-1; j >= 0; j--){
        
        if(temp < a[j])
            a[j+1] = a[j];
        
        else
            break;
            
    }
    
    a[j+1] = temp;
    
    // recursive call
    return insertionSort(a, n, index+1);
    
}


int main()
{
    int a[] = {1, 10, 43, 11 ,4, 54, 24, 55, 0, 9};
    
    int n = sizeof(a)/sizeof(a[0]);
    
    insertionSort(a, n, 1);
    
    cout << "Sorted Array: " << endl;
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    
    return 0;
}
