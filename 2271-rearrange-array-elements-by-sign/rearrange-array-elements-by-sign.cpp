class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posiIndx = 0;
        int negiIndx = 1;
        int n = nums.size();
        vector<int> ans(n,0);

        for(int i =0; i < n; i++){
            if(nums[i] > 0){
               ans[posiIndx] =  nums[i];
                posiIndx = posiIndx +2;
            }else {
                ans[negiIndx] =  nums[i];
                negiIndx = negiIndx +2;
            }
        }
        return ans;
    }
};