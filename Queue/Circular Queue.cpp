#include <bits/stdc++.h> 
class CircularQueue{
    public:
    // Initialize your data structure.
    int *arr;
    int front;
    int rear;
    int n;
    CircularQueue(int n){
        this->n = n;
        arr = new int[n];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        if((front == 0 && rear == n-1) || (rear == (front - 1) % (n - 1))){ //when your queue is full
            return false;
        }
        if(front == -1){ // when queue is empty
            front = rear = 0;
        }
        else if(rear == n-1 && front != 0){ // to maintain the cyclic nature
            rear = 0;
        }
        else{ // normal case
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        if(front == -1) // when your queue is empty
            return -1;
        int ans = arr[front];
        arr[front] = -1;
        if(front == rear){ // when there is a single element present in the queue
            front = rear = -1;
        }
        else if(front == n-1){ // to maintain the cyclicity
            front = 0;
        }
        else{ // normal case
            front++;
        }
        
        return ans;
    }
};
