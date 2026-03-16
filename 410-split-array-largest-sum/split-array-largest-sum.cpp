class Solution {
public:

    int countParti(vector<int>& nums, int maxSum){
        int n = nums.size();
        int partitions = 1;
        int sum = 0;

        for(int i = 0; i < n; i++){
            if(sum + nums[i] <= maxSum){
                sum = sum + nums[i];
            }
            else{ 
                partitions++;
                sum = nums[i];
            }
        }
        return partitions;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(),0);
        int ans = 1;
        while(low <= high){
            int mid = (low + high ) / 2;
            int parti = countParti(nums, mid);

            if(parti > k)
                low = mid+1;
            else {
                ans = mid;
                high = mid -1;
            }
        }
        return ans;
    }
};