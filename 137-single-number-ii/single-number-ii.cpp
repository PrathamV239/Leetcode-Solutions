class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     int ones = 0;
    //     int twoes = 0;
     int n = nums.size();
    //     for(int i = 0; i < n ; i++){
    //         ones = (ones ^ nums[i]) & (~twoes);
    //         twoes = (twoes ^ nums[i]) & (~ones); 
    //     }
    //     return ones;
        
    sort(nums.begin(), nums.end());
    for(int i = 1; i < n-2; i+=3){
        if(nums[i] != nums[i-1])
            return nums[i-1];
        
    }
        return nums[n-1];
    }
};