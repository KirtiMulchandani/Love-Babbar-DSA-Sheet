#include <bits/stdc++.h>

using namespace std;


bool isValid(string s) {
        
    stack<char> st;
        
    for(int i = 0; i < s.length(); i++){
        char ch = s[i];
            
        // check for open parenthesis
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        
        // check for close parenthesis
        else{
            if(st.empty())
                return false;
            else{
                char top = st.top();
                if((ch == '}' && top == '{') || (ch == ')' && top == '(') || (ch == ']' && top == '['))
                    st.pop();
                else
                    return false;
            }
        }
    }
    if(st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s = "()[]{}";
    
    if(isValid(s)){
        cout << "Balanced" << endl;
    }
    else{
        cout << "Unbalanced" << endl;
    }

    return 0;
}
