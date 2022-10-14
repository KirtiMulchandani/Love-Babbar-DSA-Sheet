#include <iostream>

using namespace std;

void sayDigit(int n, string str[]){
    if(n == 0)
        return;
        
    sayDigit(n/10, str);
    cout << str[n%10] << " ";
}


int main()
{
    int n = 123456789;
    
    string str[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    sayDigit(n, str);
    
    return 0;
}
