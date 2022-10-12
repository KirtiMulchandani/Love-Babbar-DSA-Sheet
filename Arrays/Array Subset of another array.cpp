string isSubset(int a1[], int a2[], int n, int m) {
    
    if(n < m)
        return "No";
    
    unordered_map<int, int> mp;
    
    for(int i = 0; i < n; i++)
        mp[a1[i]]++;
        
    
    for(int i = 0; i < m; i++){
        if(!(mp[a2[i]])){
            return "No";
        }
        else
            mp[a2[i]]--;
    }
    return "Yes";
    
}
