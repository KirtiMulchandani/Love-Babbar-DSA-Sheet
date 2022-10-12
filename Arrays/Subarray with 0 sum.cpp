
bool subArrayExists(int arr[], int n)
{
    //Your code here
    int sum = 0;
    unordered_map<int,int> m;
    int flag=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(sum==0 || m[sum] || arr[i]==0){
            flag=1;
        }
        else{
            m[sum]=1;
        }
    }
    if(flag==1) 
        return 1;
    else
        return 0;
}
