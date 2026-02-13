class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        string ans = "";

        for(int i =0; i < s.length(); i++){
          if(st.empty()) st.push(s[i]);

          else if((st.top() == 'A' && s[i] == 'B') || (st.top() == 'C' && s[i] == 'D')){
            st.pop();
            continue;
          }
          else 
            st.push(s[i]);
        } 
        while (!st.empty()){
            ans = st.top()+ans;
            st.pop();

        }
        return ans.length();
    }
};