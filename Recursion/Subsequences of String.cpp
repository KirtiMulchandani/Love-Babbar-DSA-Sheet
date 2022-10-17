#include <bits/stdc++.h>

using namespace std;

void solve(vector<string> &ans, string str, string output, int index){
    if(index >= str.length()){
        if(output.length() != 0)
            ans.push_back(output);
        return;
    }
    solve(ans, str, output, index+1);
    
    output += str[index];
    solve(ans, str, output, index+1);
    
}

vector<string> subsequences(string str){
	
	// Write your code here
    vector<string> ans;
    string output = "";
    int index = 0;
    
    solve(ans, str, output, index);
    return ans;
	
}





int main()
{
    string str = "abc";
    
    vector<string> ans = subsequences(str);
    
    for(auto i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
