class Solution {
public:
    string trimTrailingVowels(string s) {
        int len = s.length();
        int ind = -1;
        for(int i = len-1; i >=0; i--){
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u' )
                continue;
            else 
                ind = i;
                break;
        }

         return s.substr(0,ind+1);
        
    }
};