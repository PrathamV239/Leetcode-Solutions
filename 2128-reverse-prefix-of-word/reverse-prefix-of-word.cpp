class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack <char> st; 
        string ans = "";
        bool found = false;

        for(int i =0; i < word.length(); i++){
            st.push(word[i]);
            if(st.top() == ch){
                found = true;
                break;
            }
        }
        if (found == false) return word;

       for(int i =0; !st.empty(); i++){
        word[i] = st.top();
        st.pop();
       } 
       return word;      
    }
};