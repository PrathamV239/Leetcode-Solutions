class Solution {
public:
    void reverseString(vector<char>& s) {
        
        // for(int i =0; i<s.size(); i++){
        //     for(int j =s.size()-1; j>=0; j--){
        //         swap(s[i],s[j]);
        //     }
        // }
        int i =0;
        int j =s.size()-1;
        while (j >= i){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};