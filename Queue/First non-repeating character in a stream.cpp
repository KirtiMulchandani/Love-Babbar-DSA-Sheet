//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		string FirstNonRepeating(string A){
		    
		    queue<char> q; // for tracking
		    string ans;
		    unordered_map<char, int> count;  // for counting the occurences of the characters
		    
		    for(int i = 0; i < A.length(); i++){
		        char ch = A[i];
                count[ch]++;
                
                q.push(ch);
                
                while(!q.empty()){  
                    if(count[q.front()] > 1)
                        q.pop();
                    else{
                        ans += q.front();
                        break;
                    }
                    
                }
                
                if(q.empty())
                    ans += '#';
                
                
		    }
		    
		    return ans;
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string A;
		cin >> A;
		Solution obj;
		string ans = obj.FirstNonRepeating(A);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends



/* There would be three steps
1.) store the occurences of the characters.
2.) Push them in to the queue
3.) check if the current front's occurence is greater than 1. if it is then just pop it out. if is not then, store it in the answer string also we need to check if the queue is empty that means we haven't found any element and we are supposed to append # in our answer string.*/
