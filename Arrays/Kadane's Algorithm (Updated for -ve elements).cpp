#include<bits/stdc++.h>
using namespace std;

int maxSubArraySum(int *a, int n){
    int curr = 0, mx = INT_MIN;

    for(int i = 0; i < n; i++){
        curr += a[i];
        curr = max(curr, a[i]);
        mx = max(curr, mx);
    }

    return mx;
}

int main(){
    int a[] = {-36, -84, -10, -65, -60, -57, -26, -19, -21};
    cout << maxSubArraySum(a, 9);
}
