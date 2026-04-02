class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();
        if(s < 2 && flowerbed[0] == 0)
            return true;
        else  if(s < 2 && flowerbed[0] == 1 && n!= 0)
            return false;
        
        if(flowerbed[0] == 0 && flowerbed[1] == 0){
            flowerbed[0] = 1;
            n--;
        }

        if(flowerbed[s-1] == 0 && flowerbed[s-2] == 0){
            flowerbed[s-1] = 1; 
            n--;
        }

        for(int i = 1; i < s-1; i++){
            if(flowerbed[i] == 0 && flowerbed[i-1] == 0 && flowerbed[i+1] ==0){
                n--;
                flowerbed[i] =1;
            }
        }
        
        if(n  < 1)
            return true;
        else 
            return false;
    }
};