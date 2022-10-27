vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = n-1 ; i >= 0; i--){
        while(s.top() != -1 && arr[s.top()] >= arr[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    
}
    
vector<int> preSmallerElement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);

    vector<int> ans(n);

    for(int i = 0 ; i < n; i++){
        while(s.top() != -1 && arr[s.top()] >= arr[i]){
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
    
}
    
int largestRectangleArea(vector<int>& heights) {
        
    int n = heights.size();
    vector<int> next(n);
    vector<int> pre(n);
    int area = INT_MIN;
        
    next = nextSmallerElement(heights, n);
    pre = preSmallerElement(heights, n);
        
    for(int i = 0; i < n; i++){
        int l = heights[i];
        if(next[i] == -1) // if all the elements of the nextSmallerElement array are same then our width may become -1 also. So, in order to prevent it we assign n to next[i].
            next[i] = n;
            int b = next[i] - pre[i] - 1;
            int newArea = l * b;
            area = max(newArea, area);
        }
    return area;
}
