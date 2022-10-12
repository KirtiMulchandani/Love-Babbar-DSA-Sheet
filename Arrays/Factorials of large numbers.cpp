
vector<int> factorial(int N){
    vector<int> ans;
    ans.push_back(1);
        
        
    for(int i = 2; i <= N; i++){
        int carry = 0;
        for(int j = 0; j < ans.size(); j++){
            int value = ans[j] * i + carry;
            ans[j] = value % 10;
            carry = value / 10;
        }
            
        while(carry != 0){
            ans.push_back(carry%10);
            carry /= 10;
        }
            
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
