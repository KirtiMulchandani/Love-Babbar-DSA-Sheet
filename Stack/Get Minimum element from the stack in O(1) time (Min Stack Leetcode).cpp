class MinStack {
public:
    stack<pair<int, int>> s;  // take stack of pairs. First part of the stack would be used for pushing and popping out from the original stack and second part would be used for keeping track for the minimum element found so far.
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty())  //if the stack is empty, then push the value in both of the parts of the pair.
            s.push({val, val}); 
        else // if not, then push the minimum value between current minimum and the value into the second part of the pair.
            s.push({val, min(val, s.top().second)});
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
