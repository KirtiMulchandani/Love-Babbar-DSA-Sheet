#include <bits/stdc++.h>
using namespace std;


void printArray(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }cout << endl;
}

void sort012(int a[], int n){


    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(a[mid] == 1){
            mid++;
        }
        else if(a[mid] == 0){
            swap(a[low], a[mid]);
            low++;
            mid++;
        }
        else{
            swap(a[high], a[mid]);
            high--;
        }
    }
}


int main(){
    int arr[]= {0, 2, 1, 2, 0};
    
    sort012(arr, 5);

    printArray(arr, 5);

    return 0;
}