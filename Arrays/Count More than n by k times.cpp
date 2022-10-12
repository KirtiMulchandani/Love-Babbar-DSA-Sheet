
int countOccurence(int arr[], int n, int k) {
    int x = n/k;
    unordered_map<int, int> m;
    int count = 0;
        
    for(int i = 0; i < n; i++){
        m[arr[i]]++;
    }
        
    for(auto i : m){
        if(i.second > x){
            count++;
        }
    }
    return count;
}
