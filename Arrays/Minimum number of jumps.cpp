#include <bits/stdc++.h>

using namespace std;

int minJumps(int arr[], int n){
    
    if(n <= 1){
        return 0;
    }
        
    if(arr[0] == 0){
        return -1;
    }
        
    int step = arr[0], maxReach = arr[0], jump = 1;
        
    for(int i = 1; i < n; i++){
        if(i == n - 1)
            return jump;
        
        maxReach = max(maxReach, arr[i] + i);
        step--;
        
        if(step == 0){
            jump++;
                
            if(i >= maxReach)
                return -1;
                
            step = maxReach - i;
        }
            
    }
    return -1;
}


int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << minJumps(arr, n);
    
    return 0;
}
