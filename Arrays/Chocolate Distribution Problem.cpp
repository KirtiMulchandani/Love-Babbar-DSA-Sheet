long long findMinDiff(vector<long long> a, long long n, long long m){
    
    sort(a.begin(), a.end());
        
    long long min = INT_MAX;
        
    int i = 0, j = i+m-1;
        
    while(i < n && j < n){
        long long d = a[j] - a[i];
            
        if(d < min)
        {
                
            min = d;
        }
            i++;
            j++;
    }
        
    return min;
    
}   
