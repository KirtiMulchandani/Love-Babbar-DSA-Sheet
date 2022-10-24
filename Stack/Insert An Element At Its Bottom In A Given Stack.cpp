#include <bits/stdc++.h> 

void solve(stack<int>& st, int x){
    //base case
    if(st.empty()){
        st.push(x);
        return;
    }
    
    int element = st.top();
    st.pop();
    //recursive call
    solve(st, x);
    st.push(element);
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    
    solve(myStack, x);
    
    return myStack;
}
