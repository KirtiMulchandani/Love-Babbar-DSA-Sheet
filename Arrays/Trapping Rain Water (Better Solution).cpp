long long trappingWater(int arr[], int n){
    
    // Better approach using extra space
    int left[n] = {0}, right[n] = {0};
    left[0] = arr[0];
    right[n-1] = arr[n-1];
        
    // Prefix left max array
    for(int i = 1; i < n; i++){
        left[i] = max(arr[i], left[i - 1]);
    }
        
    // Prefix right max array
        
    for(int i = n-2; i >= 0; i--){
        right[i] = max(arr[i], right[i+1]);
    }   

        
    // Calculating result by using following formula
    // ans += min(left[i], right[i]) - arr[i]
        
    long long ans = 0;
        
    for(int i = 0; i < n; i++){
        ans += min(left[i], right[i]) - arr[i];
    }
        
    return ans;
}
