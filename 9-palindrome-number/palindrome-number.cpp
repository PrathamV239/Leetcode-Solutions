class Solution {
public:
    bool isPalindrome(int x) {

        long long revNum = 0;
        long long dup= x;

        while(x>0){
            long long ld = x % 10;
            revNum = (revNum * 10) + ld;
            x= x/10;           
        }

        if(revNum == dup)
            return true;
        else 
            return false;
        
    }
};