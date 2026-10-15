class MinStack {
public:

    stack<int> st;
    stack<int> minStack;
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);

        if(minStack.empty() || value <= minStack.top()){
            minStack.push(value);
        }
    }
    
    void pop() {
        if(st.top() == minStack.top()){
            minStack.pop();
        }

        st.pop();
    }
    
    int top() {
        int a = st.top();
        return a;
    }
    
    int getMin() {
        int a = minStack.top();
        return a;
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