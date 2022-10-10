
#include <bits/stdc++.h>

using namespace std;

long long maxSubarraySum(vector<int> arr, int n){
    
    long long sum = 0, maxSum = INT_MIN;
        
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxSum = max(sum, maxSum);
        if(sum < 0){
            sum = 0;
        }
            
    }
        return maxSum;
}


int main()
{
    vector<int> arr = {-1,-2,-3,-4};
    
    int n = arr.size();
    
    cout << maxSubarraySum(arr, n);
    
    return 0;
}
