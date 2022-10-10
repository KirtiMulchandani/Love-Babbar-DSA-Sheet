#include <bits/stdc++.h>

using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> temp(nums);
        
    for(int i = 0; i < n; i++){
        nums[(i + k) % n] = temp[i];
    }
        
}


int main()
{
    vector<int> a = {1,2,3,4,5,6,7};
    int k = 3;
    
    rotate(a, k);
    
    for(int i : a)
        cout << i << " ";
    
    return 0;
}
