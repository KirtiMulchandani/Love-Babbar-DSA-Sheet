
#include <bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int i, int j)
{
    while (i < j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}    
 
void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
   cout << arr[i]<< " ";
   cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
     
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);
    rvereseArray(arr, 0, n-1);
    cout << "Reversed array : \n";
    printArray(arr, n);
     
    return 0;
}
