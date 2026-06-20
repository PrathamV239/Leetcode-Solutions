class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n-1;

        int firstocc = -1;
        int lastocc = -1;

        while(low <= high){
            int mid = (high + low) /2;

            if(nums[mid] == target){
                    firstocc = mid;
                    high = mid -1;
            }
            else if(nums[mid] > target)
                high = mid -1;
            else 
                low = mid + 1;              
        }
        low = 0;
        high = n-1;
        while(low <= high){
           int mid = (low + high) /2;

            if(nums[mid] == target){
                lastocc = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
                high = mid -1;
            else 
                low = mid +1;
        }
        return {firstocc, lastocc};
    }
};