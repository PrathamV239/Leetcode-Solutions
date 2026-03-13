class Solution {
public:
    int daysreq(vector<int> nums, int m){
        int currsum= 0;
        int days = 1;
        for(int i =0; i < nums.size(); i++){
            if(currsum + nums[i] <= m){
                currsum+=nums[i];
            }
            else{
                days++;
                currsum = nums[i];
            } 
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        int res = 0;
        while(low <= high){
            int mid = (low + high) /2;
            int ans =  daysreq(weights, mid);
            
            if(ans <= days){
                res = mid;
                high = mid -1;
            }
            else
                low = mid +1;
        }
        return res;        
    }
};