

long long maxProduct(vector<int> arr, int n){
    long long pro = 1, maxPro = INT_MIN;
	for(int i = 0; i < n; i++){
	    pro *= arr[i];
	    maxPro = max(pro, maxPro);
	    if(pro == 0){
	     pro = 1;
	   }
	        
	}
	    
	pro = 1;
	for(int i = n - 1; i >= 0; i--){
	   pro *= arr[i];
	   maxPro = max(pro, maxPro);
       if(pro == 0){
         pro = 1;
	    }	        
	}
	return maxPro;
}
