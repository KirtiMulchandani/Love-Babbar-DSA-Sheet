//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        
        // push all the elements in to the stack
        for(int i = 0; i < n; i++)
            s.push(i);
        
        //pick up two elements, will continue to do this until the size of the stack becomes 1.
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(M[a][b] == 1)  // if a knows b then, discard a and push back b into the stack
                s.push(b);
            else
                s.push(a); // otherwise push back a
            
        }
        
        int ans = s.top();
        
        // we will verify whether we have got our celebrity or not
        
        int zeroCount = 0, oneCount = 0;
        
        //row check (for celebrity) and col check (for every one)
        for(int i = 0; i < n; i++)
            if(M[ans][i] == 0)
                zeroCount++;
            
        for(int i = 0; i < n; i++)
            if(M[i][ans] == 1)
                oneCount++;    
        
        if(zeroCount != n)
            return -1;
        
        if(oneCount != n-1)
            return -1;
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends
