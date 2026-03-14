class Solution {
public:
    long long bananaspeed (vector <int> nums, int m, int mmid){
        long long sum =0;
    
        for(int i =0; i < nums.size(); i++){
            sum = sum + ceil((double)nums[i] / mmid);
        }
        return sum;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high = *max_element(piles.begin(), piles.end());

        int ans = 0;

        while(low <= high){
            int mid = (low + high) /2;
            long long res = bananaspeed(piles,h,mid);
            if(res <= h){
                ans = mid;
                high = mid -1;
            }
            else    
                low = mid +1;
        } 
        return ans ;       
    }
};