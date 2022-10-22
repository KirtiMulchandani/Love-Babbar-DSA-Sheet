char* reverse(char *S, int len)
{
    stack<int> temp;
    
    for(int i = 0; i < len; i++){
        temp.push(S[i]);
    }
    
    for(int i = 0; i < len; i++){
        S[i] = temp.top();
        temp.pop();
    }
    
    return S;
    
}
