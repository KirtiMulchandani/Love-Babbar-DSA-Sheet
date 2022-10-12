bool find3Numbers(int A[], int n, int X)
{
    
    sort(A, A+n);
        
    for(int i = 0; i < n-2; i++){
        int left = i + 1;
        int right = n - 1;
            
        while(left < right){
            int sum = A[i] + A[left] + A[right];
            if(sum == X)
                return 1;
            else if(sum > X)
                right--;
            else
                left++;
        }
            
    }
    return 0;
}
