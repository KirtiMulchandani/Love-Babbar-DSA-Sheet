void threeWayPartition(vector<int>& array,int a, int b)
{
    int n = array.size();
    int low = 0, high = n - 1, mid = 0;
        
    while(mid <= high){
        if(array[mid] < a){
            swap(array[low], array[mid]);
            mid++, low++;
        }
        else if(array[mid] > b){
            swap(array[high], array[mid]);
            high--;
        }
        else{
            mid++;
        }
    }
        
}
