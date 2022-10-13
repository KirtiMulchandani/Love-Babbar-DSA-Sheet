
#include <bits/stdc++.h>

using namespace std;

int minOp(vector<int> a, int n){
    int i = 0, j = n - 1;
    int ans = 0;
    
    while(i <= j){
        if(a[i] == a[j])
            i++, j--;
        
        else if(a[i] < a[j]){
            i++;
            a[i] += a[i-1];
            ans++;
        }
        else{
            j--;
            a[j] += a[j+1];
            ans++;
        }
    }
    return ans;
}


int main()
{
    
    vector<int> a = {11, 14, 15, 99};
    cout << minOp(a, a.size());
    return 0;
}
