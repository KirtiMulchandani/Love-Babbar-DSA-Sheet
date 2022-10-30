#include <bits/stdc++.h> 
class Queue {
    int size;
    int *arr;
    int frnt;
    int rear;
public:
    Queue() {
        // Implement the Constructor
        size = 100000;
        arr = new int[size];
        frnt = 0;
        rear = 0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(frnt == rear)
            return true;
        else
            return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear == size)
            cout << "Queue is Full" << endl;
        else{
            arr[rear] = data;
            rear++;
        }
            
    }

    int dequeue() {
        // Implement the dequeue() function
        if(frnt == rear){
            frnt = 0;
            rear = 0;
            return -1;
        }
        else{
            int ans = arr[frnt];
            arr[frnt++] = -1;
            return ans;
        }
    }

    int front() {
        // Implement the front() function
        if(frnt == rear)
            return -1;
        else
            return arr[frnt];
    }
};
