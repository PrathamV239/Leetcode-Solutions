class Solution {
public:
    int divisor(vector<int> nums, int mid){
        int sum = 0;
        int n = nums.size();
        for(int i =0; i < n; i++){
            sum = sum  + ceil((double)nums[i] / mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        int ans = *max_element(nums.begin(), nums.end());
        while(low <= high){
            int mid = (low + high) /2;
            int res = divisor(nums, mid);
            if(res <= threshold){
                ans = mid;
                high = mid -1;
            }
            else 
                low = mid+1;
        }
        return ans;
    }
};