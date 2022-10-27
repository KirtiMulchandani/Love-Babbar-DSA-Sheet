#include <bits/stdc++.h>

using namespace std;

int solve(stack<int> &s, int mini){
    if(!s.empty()){ //traversing through out the stack
        mini = min(s.top(), mini);
    }
    
    if(s.empty()){ //if the stack gets emptied, return the minimum one found so far
        return mini;
    }
    
    int num = s.top();  // keeping track of the elements that would be popped out later
    s.pop();  // reducing the size og the stack by popping out the elements
    
    mini = solve(s, mini);
    s.push(num);  // backtracing (pushing those elements back into the stack)
    return mini;
   
} 

int getMin(stack<int>& s){
	int mini = INT_MAX;
	return solve(s, mini);
}

int main()
{
    stack<int> s;
    s.push(18);
    s.push(19);
    s.push(29);
    s.push(15);
    s.push(16);

    cout << getMin(s);
    
    return 0;
}
