#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {

    priority_queue<int> queue;
        
    for(int i = l; i < k; i++){
        queue.push(arr[i]);
    }
        
    for(int j = k; j <= r; j++){
        if(arr[j] < queue.top()){
            queue.pop();
            queue.push(arr[j]);
        }
    }
        
    return queue.top();
        
        
}



int main(){

    int a[5] = {7, 10, 4, 20, 15};
    int l = 0, r = 4, k = 4; 
    cout << "Kth Smallest: " << kthSmallest(a, l, r, k);

}
