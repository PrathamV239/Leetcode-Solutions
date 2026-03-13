class Solution {
public:
    int sumof(vector<int>& nums, int m){
        int n = nums.size();
        int sum =0;
        for(int i =0; i < n; i++){
            sum = sum + ceil((double)nums[i] / m);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int res = 1;
        while(low <= high){
            int mid = (low + high) /2;
            int ans = sumof(nums, mid);
            if(ans > threshold)
                low = mid +1; 
            else {
                res = mid;
                high = mid -1;
            }
        }
    return res;
    }
};