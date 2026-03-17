class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int indx = -1;
        int maxOnes = -1;
        int m = mat.size();
        int n = mat[0].size();

        for(int i =0; i < m; i++){
            int cntr = 0;

            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1) cntr++;
            }

            if( cntr > maxOnes){
                maxOnes = cntr;
                indx = i;
            }
        }

        return {indx, maxOnes} ;       
    }
};