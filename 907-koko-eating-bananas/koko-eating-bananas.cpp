class Solution {
public: 
    long long timetaken(vector<int> &nums, int h){
        long long sum = 0;
        for (int i =0; i < nums.size(); i++){
            sum = sum + ceil((double)nums[i] / h);
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int ans = 1;

        while(low <= high){
            int mid = (low + high) /2;
            long long res = timetaken(piles, mid);
            if(res > h)
                low = mid +1;
            else {
                ans = mid;
                high = mid -1;  
            }      
        }        
        return ans;
    }
};