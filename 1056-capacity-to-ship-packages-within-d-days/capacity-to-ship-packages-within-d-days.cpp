class Solution {
public:
    int DayNeeded(vector<int>& weights, int capacity){
        int currload = 0;
        int days = 1;
        for(int i = 0; i < weights.size(); i++){
            if(currload + weights[i] > capacity){
                days++;
                currload = weights[i];
            }
            else 
                currload = currload + weights[i];
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans = 0;
        while (low <= high){
            int mid = (low + high) / 2;

            if(DayNeeded(weights, mid) <= days){
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid +1;
            }
        }
        return ans;        
    }
};