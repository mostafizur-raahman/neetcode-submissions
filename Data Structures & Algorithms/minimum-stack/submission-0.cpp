class MinStack {
private:
    stack<int> main;
    stack<int> minimun_ele;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if (minimun_ele.empty()){
            minimun_ele.push(val);
        }else{
            minimun_ele.push( min(val, minimun_ele.top()) );
        }
    }
    
    void pop() {
        main.pop();
        minimun_ele.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return minimun_ele.top();
    }
};
