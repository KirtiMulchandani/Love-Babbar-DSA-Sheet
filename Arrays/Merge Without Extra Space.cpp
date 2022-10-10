
#include <bits/stdc++.h>

using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) 
{ 
    
    int i = n - 1;
    int j = 0;
    while(i >=0  && j < m){
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        else{
            break;
        }
    }
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);
} 


int main()
{
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};
    
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);
    
    
    cout << "Merged Sorted Arrays are: " << endl;
    merge(arr1, arr2, n , m);
    
    for(int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    
    cout << endl;
    
    for(int i = 0; i < m; i++)
        cout << arr2[i] << " ";
        
    return 0;
}
