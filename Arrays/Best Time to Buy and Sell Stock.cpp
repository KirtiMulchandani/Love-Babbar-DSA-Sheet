
int maxProfit(vector<int>& prices) {
    int n = prices.size();
        
    int right = prices[n - 1];
    int pro = 0;
        
    for(int i = n - 2; i >= 0; i--){
        right = max(right, prices[i]);
        pro = max(pro, right - prices[i]);
    }
        
        
    return pro;
        
}
