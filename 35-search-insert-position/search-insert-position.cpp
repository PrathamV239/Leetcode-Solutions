class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size();
        int ans=-1;
        while (low < high ){
            int mid = (low + high)/2;
            if(nums[mid] > target){
                high= mid;
            }
            else if(nums[mid] < target){
                low =mid+1;
            }
            else{
                ans= mid;
                break;
            }
            
        }
        if(ans>=0){
            return ans;
        }

     low =0;
         high = nums.size();
        while(low<high){
            int mid = (low+high)/2;
            cout<<high<<" "<<low<<" "<<mid<<"\n";
            if(nums[mid] >  target){
                ans= mid;
                high = mid;
                cout<<high<< " "<<low<< " "<<ans<<"\n";
            }
            else{
                low = mid+1;
            }
        }
        if(ans == -1)return nums.size();
        else return ans;
        
    }
};