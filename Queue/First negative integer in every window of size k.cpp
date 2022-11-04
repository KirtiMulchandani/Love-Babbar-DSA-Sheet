//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
    vector<long long> ans;
    deque<long long> d;
    
    // iterate for the very first window
    for(int i = 0; i < K; i++){
        if(A[i] < 0)
            d.push_back(i);
    }
    
    // check whether there is an index of an element which is -ve
    if(d.size() > 0) // if it is, then store in ans vector
        ans.push_back(A[d.front()]);
        
    else    // otherwise store 0
        ans.push_back(0);
        
    // now iterate for rest of the windows
    
    for(int i = K; i < N; i++){
        
        // check the fornt of the queue is the part of current window of not
        if(!d.empty() && (i - d.front()) >= K) // if is not, then pop it out(for removing previous element from the window)
            d.pop_front();
        
        // for including next element
        if(A[i] < 0)
            d.push_back(i);
            
        if(d.size() > 0)
            ans.push_back(A[d.front()]);
        else
            ans.push_back(0);
            
        
    }
    
    return ans;
                                                 
 }
