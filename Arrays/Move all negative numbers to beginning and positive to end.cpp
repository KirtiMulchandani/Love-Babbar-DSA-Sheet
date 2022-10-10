#include <bits/stdc++.h>

using namespace std;

void moveElements(vector<int> &a){
    int n = a.size();
    
    int s = 0, l = n - 1;
    
    while(s < l){
        
        if(a[s] >= 0 && a[l] < 0)
            swap(a[s++], a[l--]);
        
        else if(a[l] >= 0)
            l--;
        
        else if(a[s] < 0)
            s++;
        
        else
            l--, s++;
        
    }
    
}


int main()
{
    vector<int> a = {-12, 11, -13, -5, 6, -7, 5, -3, 11};
    
    moveElements(a);
    
    for(int i : a)
        cout << i << " ";

    return 0;
}
