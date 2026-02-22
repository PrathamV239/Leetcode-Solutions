class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        bool first = true;
        int c1 =0, c2=0;

        for(int i =0; i < nums.size(); i++){
            if(nums[i] % 2 == 1)
                first = !first;
            if(i % 6 == 5)
                first = !first;

            c1 = first ? c1 + nums[i] : c1;
            c2 = first ? c2 : c2+nums[i];     
        }
        return c1 -c2;
    }
};