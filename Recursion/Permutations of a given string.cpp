#include <bits/stdc++.h>

using namespace std;

    
void solve(string s, vector<string> &ans, int index){
    if(index >= s.length()){
        if(!(find(ans.begin(), ans.end(), s) != ans.end()))
            ans.push_back(s);
            return;
	   }
	        
	for(int i = index; i < s.length(); i++){
	    swap(s[index], s[i]);
        solve(s, ans, index+1);
	            
	   // backtrack
	   swap(s[index], s[i]);

	            
     }
	        
}
	    
vector<string>find_permutation(string S)
{
    vector<string> ans;
    int index = 0;
		    
    solve(S, ans, index);
		    
    sort(ans.begin(), ans.end());
    return ans;
		    
}


int main()
{
    string s = "abc";
    
    vector<string> ans = find_permutation(s);
    
    for(string i : ans){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
