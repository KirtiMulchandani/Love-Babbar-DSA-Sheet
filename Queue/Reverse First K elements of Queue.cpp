//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    
    int n = q.size();
    stack<int> s;  //to store first k elements
    
    for(int i = 0; i < k; i++){  // storing k elements into the stack by removing from the queue
        s.push(q.front());
        q.pop();
    }
    
    while(!s.empty()){  // pushing those k elements back into the queue (but those would be appending at the back)
        q.push(s.top());
        s.pop();
    }
    
    for(int i = 0; i < n-k; i++){  // in order to correct the order
        int num = q.front();
        q.pop();
        q.push(num);
    }
    
    return q;
}
