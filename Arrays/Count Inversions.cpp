long long int merge(long long arr[], long long s ,long long e){
        
    // Calculating mid 
    long long int mid = s + (e - s)/2;
        
    long long count = 0;
        
    long long int l1 = mid - s + 1;
    long long int l2 = e - mid;
        
    long long int *first = new long long int[l1];
    long long int *second = new long long int[l2];
        
        
    long long int k = s;
        
    for(int i = 0; i < l1; i++){
        first[i] = arr[k++];
    }
        
    k = mid + 1;
        
    for(int i = 0; i < l2; i++){
        second[i] = arr[k++];
    }
        
    int ind1 = 0, ind2 = 0;
    k = s;
        
    while(ind1 < l1 && ind2 < l2){
        if(first[ind1] > second[ind2]){
            count += l1 - ind1;
            arr[k++] = second[ind2++];
        }
        else{
            arr[k++] = first[ind1++];
        }
            
    }
        
        
    while(ind1 < l1){
        arr[k++] = first[ind1++];
    }
        
    while(ind2 < l2){
        arr[k++] = second[ind2++];
    }
        
        
    return count;
}
    
long long int mergeSort(long long a[], long long s ,long long e){
    // base case
    if(s >= e){
        return 0;
        
    }
        
    // Calculating mid 
    long long int mid = s + (e - s)/2;
        
    // sort left half
    long long int count = mergeSort(a, s, mid);
        
    // sort right half
    count += mergeSort(a, mid+1, e);
        
    // merge
    count += merge(a, s, e);
        
    return count;
    
}

long long int inversionCount(long long arr[], long long N)
{
    // Your Code Here
    return mergeSort(arr, 0, N-1);
}
