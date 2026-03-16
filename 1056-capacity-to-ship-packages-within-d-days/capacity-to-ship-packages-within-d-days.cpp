class Solution {
public:
    int quantity(vector<int> nums, int mid){
    int day =1;
    int sum =0;

    for(int i =0; i< nums.size(); i++){
        if(sum + nums[i] > mid){
            day++;
            sum = nums[i];
        }
        else 
            sum += nums[i];
    }
    return day;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(),0);
        int ans = -1;
        while(low <= high){
            int mid = (low + high) /2;
            cout << mid<<endl;
            int res = quantity(weights,mid);
      
            if(res > days)
               low = mid +1;
            else{
                ans = mid;
                 high = mid -1;
            }
        } 
        return ans;   
    }
};