void solve(stack<int> &stack, int element){
    if(stack.empty() || stack.top() < element){
        stack.push(element);
        return;
    }
    
    int num = stack.top();
    stack.pop();
    //recursive call
    solve(stack, element);
    
    //back track
    stack.push(num);
}
void sortStack(stack<int> &stack)
{
    if(stack.empty()){
        return;
    }
    
    int element = stack.top();
    stack.pop();
    
    sortStack(stack);
    
    solve(stack, element);
     
}
