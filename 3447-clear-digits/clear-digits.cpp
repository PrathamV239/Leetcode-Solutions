class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string ans = "";
        for(int i =0; i < s.length(); i++){
            if(!isalpha(s[i])){
                st.pop();
                continue;
            }
            st.push(s[i]);
        }
        while (!st.empty()){
            ans=st.top() + ans;
            st.pop();
        }
        return ans;
        
    }
};