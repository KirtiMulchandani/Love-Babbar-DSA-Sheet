#include <iostream>

using namespace std;


class Stack{
private:
    int top;
    int size;
    int *arr;
        
    
public:
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    
    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        
        else{
            cout << "Stack OverFlow" << endl;
        }
        
    }
    
    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack UnderFlow" << endl;
        }
        
    }
    
    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout << "Stack Empty" << endl;
            return -1;
        }
    }
    
    bool isEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }
        
};


int main()
{
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    cout << "Top element: " << st.peek() << endl;
    
    st.push(6);
    
    st.pop();
    
    cout << "Top element: " << st.peek() << endl;

    return 0;
}
