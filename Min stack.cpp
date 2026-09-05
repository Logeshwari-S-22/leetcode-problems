class MinStack {
public:
    stack<int> sk;
    stack<int> minsk;
    MinStack() {
        
    }
    
    void push(int value) {
        sk.push(value);
        if(minsk.empty()){
            minsk.push(value);
        }
        else{
            minsk.push(min(value,minsk.top()));
        }
    }
    
    void pop() {
        sk.pop();
        minsk.pop();
    }
    
    int top() {
        return sk.top();
    }
    
    int getMin() {
        return minsk.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
