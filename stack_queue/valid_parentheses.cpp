class Solution {
    public:
        bool isValid(string s) {
            if(s.empty()){return true;}
            if(s.size() % 2 != 0){return false;}
            stack<char> st;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                    st.push(s[i]);
                } else {
                    // if (st.empty()) {
                    //     return false;
                    // }
                    // char temp = ;
                    if(!st.empty()){if((s[i] == ')' && st.top() != '(') || (s[i] == '}' && st.top() != '{') || (s[i] == ']' && st.top() != '[')){
                        return false;
                    }
                    st.pop();
                    }
                    else if(st.empty() && s[i] == ')' || '}' || ']'){
                        return false;
                    }
                }
            }
            return st.empty();
        }
    };