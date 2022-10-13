int smallestSubWithSum(int arr[], int n, int x)
{
 
    if(n == 1){
        if(x < arr[0])
            return 1;
        else
            return 0;
    }
        
    int curr_sum = 0, min_len = INT_MAX;
 
    int start = 0, end = 0;
    while (end < n) {
            
        while (curr_sum <= x && end < n)
            curr_sum += arr[end++];
     
        while (curr_sum > x && start < n) {
            if (end - start < min_len)
                min_len = end - start;
     
            curr_sum -= arr[start++];
        }
    }
    return min_len;  
}
