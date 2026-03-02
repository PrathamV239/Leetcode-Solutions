class Solution {
public:

// redo with gap method
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i = 0;
        int j = 0;


       

        while (i < m && j < n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] > nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
        }

        if(i == m && j < n ){
            for(int i = j;  i < n; i++ ){
                ans.push_back(nums2[i]);
            }
        } 

        else if(i < m && j == n ){
            for(int j = i;  j < m; j++ ){
                ans.push_back(nums1[j]);
            }
        }


        for (int i = 0; i < nums1.size(); i++){
            nums1[i] =  ans[i];
        } 

    }
};