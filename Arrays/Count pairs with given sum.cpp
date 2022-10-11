
int getPairsCount(int arr[], int n, int k) {
        
    unordered_map<int, int> temp;
    int ans = 0;
        
    for(int i = 0; i < n; i++){
        int d = k - arr[i];
        if(temp[d]){
            // add occurrence to the ans variable
            ans += temp[d];
        }
        temp[arr[i]]++;
    }
    return ans;
}
