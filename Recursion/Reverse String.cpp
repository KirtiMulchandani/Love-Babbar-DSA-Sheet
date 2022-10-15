#include <iostream>

using namespace std;

void reverseString(string &str, int s, int e){
    if(s > e)
        return;
        
    swap(str[s], str[e]);    
    return reverseString(str, s+1, e-1);
}


int main()
{
    string str = "abcdefghijklmnopqrstuvwxyz";
    
    reverseString(str, 0, str.length()-1);
    
    cout << str << endl;

    return 0;
}
