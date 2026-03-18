class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int unique =0;
       int n = nums.size();
       for(int j = 1; j < n; j++){
        if(nums[unique] != nums[j]){
            unique++;
            nums[unique] = nums[j];
        }
        
       }
       return unique+1; 
    }
};