
//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    stack<int> s;
    
    int size = q.size();
    for(int i = 0; i < size; i++){
        int n = q.front();
        s.push(n);
        q.pop();
    }
    
    for(int i = 0; i < size; i++){
        q.push(s.top());
        s.pop();
    }
    
    return q;
    
}
