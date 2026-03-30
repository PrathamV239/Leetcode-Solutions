class Solution {
public:
    bool canJump(vector<int>& nums) {
       int maxInd =0;
       int n = nums.size();

       for(int i =0; i < n-1; i++){
        if(i > maxInd)
            return false;
        int currmax = i + nums[i];
        maxInd = max(maxInd, currmax);
    
       }
       if(maxInd >= n-1)
        return true;
        else 
            return false;
    }
};