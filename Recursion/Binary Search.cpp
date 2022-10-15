#include <iostream>

using namespace std;


bool binartSearch(int *a, int s, int e, int k){
    if(s > e){
        return false;
    }
    
    int mid = s + (e - s)/2;
    
    if(a[mid] == k)
        return true;
    
    else if(a[mid] > k)
        return binartSearch(a, s, mid-1, k);
    
    else
        return binartSearch(a, mid+1, e, k);
    
}

int main()
{
    int a[] = {1, 5, 6, 10, 11, 13, 21, 22, 45, 54};
    
    int k = 100, n = 10, s = 0, e = n-1;
    
    if(binartSearch(a, s, e, k))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}
