class Solution {
public:
    bool possible(vector<int> nums, int mid, int m, int k){
        int cntr = 0; 
        int bouqt =0;
        for(int i =0; i < nums.size(); i++){
            if(nums[i] <= mid){
                cntr++;
                if(cntr == k){
                    bouqt++;
                    cntr = 0;
                }
            }
            else 
                cntr =0;
        }
        return bouqt >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int total = 1LL*m*k;
        if(total > bloomDay.size()) return -1;
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());
 int ans =-1;
        while (low <= high){
            int mid = (low + high) /2;
           
            int res = possible(bloomDay, mid, m, k);
            if(res){
                ans = mid;
                high= mid -1 ;
            }
            else 
                low = mid +1;
        } 
        return ans;       
    }
};