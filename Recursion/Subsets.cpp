#include <bits/stdc++.h>

using namespace std;

void solve(vector<int>& nums, vector<vector<int>> &ans, vector<int> output, int index){
   if(index >= nums.size()){
       ans.push_back(output);
       return;
   } 
        
    // for excluding the elements increment the index by 1    
    solve(nums, ans, output, index+1);
        
        
    // for including the elements 
    int element = nums[index];
    output.push_back(element);
    solve(nums, ans, output, index+1);
    
}
    
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;  // for storing the subsets
    vector<int> output;  // for keeping track of the subsets
        
    int index = 0;  // for keeping track of the elements
        
    solve(nums, ans, output, index);
    return ans;

}




int main()
{
    vector<int> nums = {1,2,3};
    
    vector<vector<int>> ans = subsets(nums);
    
    for(auto i : ans){
        for(int x : i){
            cout << x << " ";
        }cout << endl;
    }


    return 0;
}
