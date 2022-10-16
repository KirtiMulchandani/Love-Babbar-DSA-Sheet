#include <bits/stdc++.h>

using namespace std;


int partition(int *a, int s, int e){
    int pivot = a[s];
    int count = 0;
    
    for(int i = s+1; i <= e; i++){
        if(a[i] <= pivot)
            count++;
    }
    
    int pivotIndex = s + count;
    
    swap(a[pivotIndex], a[s]);
    int i = s, j = e;
    
    while(i < pivotIndex && j > pivotIndex){
        while(a[i] <= a[pivotIndex]) i++;
        while(a[j] > a[pivotIndex]) j--;
        
        if(i < pivotIndex && j > pivotIndex)
            swap(a[i++], a[j--]);
    }
    return pivotIndex;
}

void quickSort(int *a, int s, int e){
  
    if(s >= e)
        return;
    
    int p = partition(a, s, e);
    
    quickSort(a, s, p-1);
    
    quickSort(a, p+1, e);
    
}


int main()
{
    int a[] = {1, 10, 43, 11 ,4, 54, 24, 55, 0, 9};
    
    int n = sizeof(a)/sizeof(a[0]);
        
    quickSort(a, 0, n-1);
    
    cout << "Sorted Array: \n" << endl;
    
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}
