vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1); // since from the back, last element would not be having numbers to its right. That's why we push -1.
    
    vector<int> ans;
    
    //traverse from the back
    for(int i = n-1 ; i >= 0; i--){
        while(s.top() >= arr[i]){  // check if the top element is smaller, then push into the ans otherwise pop out the elements untill the top becomes smaller than the current element
            s.pop();
        }
        ans.push_back(s.top());
        s.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
    
}
