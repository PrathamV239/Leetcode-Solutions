class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res ={};
        set<int> s;
        int mini = INT_MAX;
        int maxi = INT_MIN;

        for(int x : nums){
            s.insert(x);

            mini = min(mini,x);
            maxi = max(maxi,x);
        }
        
        for(int i = mini; i < maxi; i++){
            if(s.find(i) == s.end())
                res.push_back(i);
        }
        return res;
    }             
};