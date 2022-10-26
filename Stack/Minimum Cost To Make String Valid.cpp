int findMinimumCost(string str) {
    if(str.length() % 2 == 1)
        return -1;
    
    stack<char> s;
    
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        if(ch == '{') //if the character is an opening bracket, then push it into the stack
            s.push(ch);
        else{ // otherwise it is a close bracket
            if(!s.empty() && s.top() == '{') //now check for opening one, in ordr to skip the valid ones
                s.pop();
            else
                s.push(ch);
        }
    }
    
    int a = 0, b = 0;
    while(!s.empty()){
        if(s.top() == '{')
            b++;
        else
            a++;
        s.pop();
    }
    
    int ans = (a+1)/2 + (b+1)/2;  // formula for required minimum cost
    return ans;
}
