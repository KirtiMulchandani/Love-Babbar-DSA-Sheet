vector<int> twoSum(vector<int>& nums, int target) {
        
    vector<int> ans;
        
    unordered_map<int, int>m;
        
    for(int i = 0; i < nums.size(); i++){
        int sum = target - nums[i];
        if(m.find(sum) != m.end()){
            ans.push_back(m[sum]);
            ans.push_back(i);
            return ans;
        }          
            m[nums[i]] = i;
    }
    return ans;
}
