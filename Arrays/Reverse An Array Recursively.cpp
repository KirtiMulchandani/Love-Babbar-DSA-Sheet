#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int n, int i, int j){
    // Base Condition
    if(i > j){
        return;
    }
    swap(a[i], a[j]);
    reverse(a, n, i + 1, j - 1);
}


void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}


int main(){


    int a[5] = {5,6,7,8,9};
    int n = 5, i = 0, j = n - 1;
    reverse(a, n, i, j);
    print(a, n);


}
