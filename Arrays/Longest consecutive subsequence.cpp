
int findLongestConseqSubseq(int arr[], int N)
{
    unordered_map<int, int> m;
    for(int i = 0; i < N; i++){
        m[arr[i]]++;
    }
      
    int ans = 1;
      
    for(int i = 0; i < N; i++){
        if(m[arr[i] - 1])
            continue;
            
        else{
            int count = 0;
            int current = arr[i];
            while(m[current]){
                count++;
                current++;
            }
            ans = max(ans, count);
            
        }
            
    }
    return ans;
}
