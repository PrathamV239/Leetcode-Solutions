class Solution {
public:
    int findPeakElement(vector<int>& nums) {

         int n = nums.size();
        int low =0, high = n;
        
        for(int i = 0; i < n; i++){
            while (low < high){

                int mid =( high + low )/ 2;
                if(high==low+2){
                    if(nums[low]<nums[high-1]){
                        return high-1;
                    }
                    else return low;
                }
                if(mid==n-1){
                    return mid;
                }
                if(mid==0){
                    return mid;
                }

                if(nums[mid] > nums[mid - 1] && nums [mid] > nums[mid +1])
                    return mid;
                else if (nums[mid] < nums[mid -1])
                    high = mid;
                else if(nums[mid] < nums[mid + 1]) 
                    low = mid+1;                   
            }
        }
        return -1;   
    }
};