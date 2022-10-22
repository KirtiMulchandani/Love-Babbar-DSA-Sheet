
class TwoStack {
    int *arr, top1, top2, size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
        
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1){
            arr[++top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1)
            arr[--top2] = num;
       
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
        if(top1 == -1)
            return -1;
        else
            return arr[top1--];
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
        if(top2 == size)
            return -1;
        else
            return arr[top2++];
    }
};
