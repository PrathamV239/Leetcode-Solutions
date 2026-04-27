class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five =0;
        int ten =0;
        int twen = 0;
        int n = bills.size();


        for(int i = 0; i < n; i ++){
            if(bills[i] == 5)
                five++;
            else if(bills[i] == 10){
                if(five != 0){
                    five--;
                    ten++;
                }
                else 
                    return false;
            }
            else{
                if(ten != 0 && five != 0){
                    five--;
                    ten--;
                    twen++;
                }
                else if(five !=0 && five >= 3){
                    five = five -3;
                    twen++;
                }
                else 
                    return false;

            }

        }
        return true;
    }
};