class Solution {
public:

    int findMax(vector<int> piles){
        int n = piles.size();
        int maxi = INT_MIN;
        for(int i =0; i < n; i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }

    long long calctime(vector<int> piles, int h){
         long long total =0;

        for(int i =0; i < piles.size(); i++){
       
        total = total + ceil(double(piles[i]) / h);
        
        }
        return total;
    }


    int minEatingSpeed(vector<int>& piles, int h) {

        int low =1;
        int high = findMax(piles); 
        int ans = findMax(piles);

        while (low <= high){
            int mid = (low + high) /2;
            long long totalH = calctime(piles, mid);

            if(totalH <= h){
                ans = mid;
                high = mid - 1;
            }
            else 
                low = mid + 1;
        }
        return ans;     
    }
};