class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int cntr = 0;
        sort(arr2.begin(), arr2.end());
        for (int i = 0; i < arr1.size(); i++) {
            int lower = arr1[i] - d;
            int upper = arr1[i] + d;
            auto it = lower_bound(arr2.begin(), arr2.end(), lower);

            if(it == arr2.end() || *it > upper){
                cntr++;
            }
        }
        return cntr;
    }
};