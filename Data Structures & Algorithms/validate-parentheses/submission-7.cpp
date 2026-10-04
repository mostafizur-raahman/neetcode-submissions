class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(auto c : s ){
            if ( c == '(' || c == '{' || c == '['){
                ch.push(c);
            }else{
                if (!ch.size()) return 0;
                bool ans = 0;
                char last = ch.top();
                if ( last == '[' && c == ']'){
                    ch.pop();
                    ans = 1;
                }else if ( last == '{' && c == '}'){
                    ch.pop();
                    ans = 1;
                }else {
                    if (last == '(' && c == ')'){
                        ch.pop();
                        ans = 1;
                    }
                }
                if (!ans) return 0;
            }
        }

        if (ch.size() == 0) return 1;
        else return 0;
    }
};
