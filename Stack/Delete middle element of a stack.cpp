void delete(stack<int>&s, int size, int count){
    // base case
    if(count == size/2){
        s.pop();
        return;
    }
        
    int num = s.top();
    s.pop();
    solve(s, size, count+1);
    s.push(num);
        
}

void deleteMid(stack<int>&s, int sizeOfStack)
{
    delete(s, sizeOfStack, 0);
}
