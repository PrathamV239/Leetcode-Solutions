class Solution {
public:
    int maxDepth(string s) {

        stack <char> st;
        int m =0;;

        for(int i =0; i<s.length(); i++){
            if(s[i] == '('){
                st.push(s[i]);
                m = max(m, (int)st.size());  
            }
            else if(s[i] == ')' && !st.empty()){
                st.pop();   
            }
        }
        return m;        
    }
};