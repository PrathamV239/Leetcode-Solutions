class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cntr =0;
        int maxi = 0;

        for(int i =0; i < nums.size(); i++){
            if(nums[i] ==  1)
                cntr++;
            else 
                cntr = 0;

        maxi = max(maxi,cntr);
        }
        return maxi;
    }
};