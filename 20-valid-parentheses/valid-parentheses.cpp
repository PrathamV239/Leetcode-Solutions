class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i =0; i<s.length();i++){

        if(st.empty()) 
            st.push(s[i]);
        else if((st.top ()== '(' && s[i] == ')') || (st.top() == '[' && s[i] == ']') || (st.top() == '{' && s[i] == '}')){
            st.pop();
            continue;
            }else
                st.push(s[i]);

        }
        return st.empty();
    }
};