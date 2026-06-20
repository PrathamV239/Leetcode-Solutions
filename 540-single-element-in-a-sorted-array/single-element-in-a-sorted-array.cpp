class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int result=0;
        int l = nums.size();
        for(int i=0;i<l;i++){
            result=result ^ nums[i];
        }

    return result;
    }
};