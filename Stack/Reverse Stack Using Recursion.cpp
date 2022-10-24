void insertAtBottom(stack<int> &st, int x){
    //base case
    if(st.empty()){
        st.push(x);
        return;
    }
    
    int element = st.top();
    st.pop();
    //recursive call
    insertAtBottom(st, x);
    st.push(element);
}

void reverseStack(stack<int> &stack) {
     //base case
    if(stack.empty()){
        return;
    }
    
    
    int element = stack.top();
    stack.pop();
    reverseStack(stack);
    
    //insert at bottom
    insertAtBottom(stack, element);
}
