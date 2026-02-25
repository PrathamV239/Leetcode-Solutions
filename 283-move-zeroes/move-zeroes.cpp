class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int n = nums.size();

        // for (int i =0; i < n; i++){
        //     for (int j=i+1; j < n; j++){
        //         if(nums[i] == 0){
        //             int temp = nums[i];
        //             nums[i] = nums[j];
        //             nums[j] = temp;
        //         }                
        //     }
        // }  
        int j =0;

        for(int i =0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};