#include <bits/stdc++.h>

using namespace std;

    
void solve(vector<string> &ans, string digits, string output, int index, string mapping[]){
    if(index >= digits.size()){
        ans.push_back(output);
        return;
    }
        
    int num = digits[index] - '0';
    string value = mapping[num];
        
    for(int i = 0; i < value.length(); i++){
        output += value[i];
        solve(ans, digits, output, index+1, mapping);
        output.pop_back(); // for removing the last added character 
    }
        
}
    
vector<string> letterCombinations(string digits) {
        
    if(digits.length() == 0)
        return {};
        
    vector<string> ans;
        
    string output = "";
        
    int index = 0;
        
    string mapping[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        
    solve(ans, digits, output, index, mapping);
        
    return ans;
        
}


int main()
{
    string digits = "79";
    
    vector<string> ans = letterCombinations(digits);
    
    for(string i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
