class Solution {
public:
    bool check(vector<int>& nums) {
// for brute for : iterate at each element and then compare with all elements in the array.
        int n = nums.size();
        if (n <= 1) return true;

        int inversion =  0;


        for(int i = 1; i < n; i++){
            if(nums[i] < nums[i-1])
               ++inversion;
        }  
        if(nums[0] < nums[n-1])
            ++inversion;              
     if(inversion > 1)
        return false;
    else 
        return true;
    }
};