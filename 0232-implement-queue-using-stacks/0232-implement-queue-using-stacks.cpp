class MyQueue {
    
    stack<int> input;
    stack<int> output;
    
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        
        if(output.empty()){
            int s = input.size();
            for(int i=0; i<s;i++){
                output.push(input.top());
                input.pop();
            }
            
            int x = output.top();
            output.pop();
            return x;
        }
        
        else {
            int x = output.top();
            output.pop();
            return x;
        }
        
    }
    
    int peek() {
        
        if(output.empty()){
            int s = input.size();
            for(int i=0; i<s;i++){
                output.push(input.top());
                input.pop();
            }
            
            int x = output.top();
            return x;
        }
        
        else {
            int x = output.top();
            return x;
        }
        
    }
    
    bool empty() {
        if(input.empty() && output.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */