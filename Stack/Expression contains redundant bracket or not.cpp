#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<int> st;
    
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
        
        // check if the character is opening bracket or an operator or not. if it is then, push it into the stack
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
            st.push(ch);
        else{ // if it is not then, check whether it is a closing bracket or not
            bool isRed = true;
            if(ch == ')'){ //if it is then check, is there any arithmetic operator in the stack
                while(st.top() != '('){
                    char top = st.top();
                    if(top == '+' || top == '-' || top == '*' || top == '/')
                        isRed = false;
                    st.pop();
                }
                if(isRed == true)
                    return true;
                st.pop();
            }

        }
        
    }
    return false;
}
