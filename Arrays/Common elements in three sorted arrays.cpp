
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    //code here.
    int i, j, k;
    i = j = k = 0;
    int p1, p2, p3;
    p1 = p2 = p3 = INT_MIN;
    vector<int> ans;
            
    while(i < n1 && j < n2 && k < n3){
                
        while(A[i] == p1 && i < n1)
            i++;
                
        while(B[j] == p2 && j < n2)
            j++;
                
        while(C[k] == p3 && k < n3)
            k++;
                
        if(A[i] == B[j] && B[j] == C[k]){
            ans.push_back(A[i]);
            p1 = A[i];
            p2 = B[j];
            p3 = C[k];
            i++; j++; k++;
        }
                
        else if(A[i] < B[j] && A[i] < C[k]){
            p1 = A[i];
            i++;
        }
                
        else if(B[j] < C[k]){
            p2 = B[j];
                j++;
            }
                
        else{
            p3 = C[k];
            k++;
        }
                
    }
            
    return ans;
}
