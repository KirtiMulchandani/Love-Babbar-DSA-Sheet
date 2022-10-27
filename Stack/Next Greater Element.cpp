//Function to find the next greater element for each element of the array.
vector<long long> nextLargerElement(vector<long long> arr, int n){
    stack<long long> s;
    s.push(0);
        
    vector<long long> ans(n);
        
    for(int i = 1; i < n; i++){
        if(arr[i] <= arr[s.top()]) // smaller elements or equal elements can be pushed over the top of the stack.
            s.push(i); 
        else{
            while(!s.empty() && arr[i] > arr[s.top()]){ // if you get the element which is greater then the top of the stack then we got our next greater element for that index(top).
                ans[s.top()] = arr[i]; // now update the answer and pop it out from the stack.
                s.pop();
            }
            s.push(i); //push the current index
        }
    }
        
    while(!s.empty()){ // now whatever (indices) are left in the stack that would be filled with -1. Because there does not exist any NGE.
        ans[s.top()] = -1;
        s.pop();
    }
        
    return ans;
}
