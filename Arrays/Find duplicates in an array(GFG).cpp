//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {

        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            int index = arr[i] % n;  // find out the index by taking element modulo n
            arr[index] += n;  // after that, increment the element at the obtain index by n
        }
        
        for(int i = 0 ; i < n; i++){
            if((arr[i]/n) >= 2)  // whichever element has more than 1 occurrence, arr[i]/n will always produce 2 or more than 2
                ans.push_back(i); // hence store that index
        }
        
        if(ans.size() == 0)
            return {-1};
        else
            return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
