class Solution {
public:

    bool isvowel(char c){
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }

    // string reverseVowels(string s) {
        
    //     int i = 0;
    //     int j = s.length() -1;
        
    //     while(i < j){
    //        if(!isvowel(s[i]))
    //             i++;
    //         else if(!isvowel(s[j]))
    //             j--;
    //          else{ 
    //             swap(s[i],s[j]);
    //             i++;
    //             j--;
    //          }

    //     }
    //     return s;
    // }


    string reverseVowels(string s){
        stack<char> st;
        int n = s.length();
        for(int i =0; i < n; i++){
            if(isvowel(s[i]))
                st.push(s[i]);
        }

        for(int i=0; i < n; i++){
            if(isvowel(s[i])){
                s[i] = st.top();
                st.pop();
            }
        }
        return s;
    }
};