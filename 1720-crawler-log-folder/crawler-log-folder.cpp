class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> st;
        int cntr =0;

        for (int i =0; i < logs.size(); i++){
            if (logs[i] == "../"){
                if(st.empty()) continue;
            st.pop();
            }
            else if(logs[i] == "./"){
                continue;
            }
            else {
                st.push(logs[i]);
            }
        }
        while(!st.empty()){
            st.pop();
            cntr++;
        }
        return cntr;
    }
};