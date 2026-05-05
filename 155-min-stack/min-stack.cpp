class MinStack {
    stack<int>os;
    stack<int>ms;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        os.push(val);
        if(ms.empty()){
            ms.push(val);
        }else{
            if(ms.top()>=val){
                ms.push(val);
            }
        }
    }
    
    void pop() {
       
        if(os.top()==ms.top()){
            ms.pop();
        }
         os.pop();
    }
    
    int top() {
        return os.top();
    }
    
    int getMin() {
        return ms.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */