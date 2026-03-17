class Solution {
public:
    int maxi(vector<vector<int>>& nums, int col, int m){

        int max = -1;
        int indx = -1;

        for (int i =0; i < m; i++){
            if(nums[i][col] > max){
                max = nums[i][col];
                indx = i;
            }
        }              
        return indx;
    }

    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size(); // no of rows
        int n = mat[0].size(); // no of cols

        int low = 0;
        int high =  n-1;

        while(low <= high){
            int mid = (low + high) /2;
            int row = maxi(mat, mid,m);

            int left = mid - 1 >= 0 ? mat[row][mid-1] : INT_MIN;
            int right = mid + 1 < n ? mat[row][mid+1] : INT_MIN;

            if(mat[row][mid] > left  && mat[row][mid] > right)
                return {row,mid};
            
            else if(mat[row][mid] > mat[row][mid +1]){
                high = mid -1;
            }
            else 
                low = mid +1;
        }
        return {-1,-1};
        
    }
};