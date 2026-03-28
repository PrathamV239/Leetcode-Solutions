class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int fiv =0; int ten =0; 
        int twen =0;
        int n = bills.size();        
        
        for(int i =0; i <n; i++){
            if(bills[i] == 5)
                fiv++;
            else if(bills[i] == 10){
                if(fiv != 0){
                    ten++;
                    fiv--;
                }
                else 
                    return false;
            }
            else {
                if(fiv != 0 && ten != 0){
                    fiv--;
                    ten--;
                    twen++;
                }
                else if(fiv >= 3){
                    fiv = fiv -3;
                    twen++;
                }
                else   
                    return false;
    
                }
            


        }
        return true;
    }
};