class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        bool ans = true;
        for(auto ch : s){
            if ( ch == '(' || ch == '{' || ch =='['){
                st.push(ch);
            }else{
                if (st.empty()) return false;  
                char top = st.top();
                if ( (ch == ']' && top == '[') || (ch == '}' && top == '{') || (ch == ')' && top == '(') ){
                    st.pop();
                }else{
                    ans = false;
                    break;
                }
            }
        }
        if ( !st.empty() ){
            return false;
        }
        return ans;
    }
};
