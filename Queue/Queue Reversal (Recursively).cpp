
//function Template for C++

//Function to reverse the queue.

void solve(queue<int> &q){
    if(q.size() == 0){
        return;
    }
    
    int num = q.front();
    q.pop();
    
    solve(q);
    
    q.push(num);
    
}

queue<int> rev(queue<int> q)
{
    solve(q);
    return q;
    
}
