int majorityElement(int a[], int size)
{
        
    int count = 0;
    int element = 0;
        
    for(int i = 0; i < size; i++){
        if(count == 0)
            element = a[i];
        if(element == a[i])
            count++;
        else
            count--;
    }
        
        
        
    int res = 0;
    for(int i = 0; i < size; i++){
        if(element == a[i])
            res++;
    }
        
    if(res > size/2)
        return element;
    else
        return -1;
        
}
