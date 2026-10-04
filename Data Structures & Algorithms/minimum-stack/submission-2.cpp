class MinStack {
private:
    stack<int> st;
    stack<int> ms;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if (ms.empty()){
            ms.push(val);
        }else{
            ms.push( min(val, ms.top()));
        }
    }
    
    void pop() {
        st.pop();
        ms.pop();
    }
    
    int top() {

        return st.top();
    }
    
    int getMin() {
        return ms.top();
    }
};
