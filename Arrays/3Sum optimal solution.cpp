vector<vector<int>> threeSum(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n-2; i++){
            int low = i + 1, high = n - 1;
            
            if(i == 0 || (i > 0 && nums[i] != nums[i-1])){
                while(low < high){
                    int sum = 0 - nums[i];
                
                if(nums[low] + nums[high] == sum){
                    vector<int> temp;
                    temp.push_back(-sum);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    ans.push_back(temp);
                    
                    while(low < high && nums[low] == nums[low+1]) low++;
                    while(low < high && nums[high] == nums[high-1]) high--;
                    low++, high--;
                }
                else if(nums[low] + nums[high] > sum) high--;
                else low++;
            }
                
            }
            
        }
        
        return ans;
    }
