class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        
        for(int i =0; i < arr.size(); i++){

            int low =0;
        int high = arr.size()-1;
        while(low <= high){
            int mid = (low + high)/ 2;
            if(arr[mid] == 2 * arr[i] && mid != i)
                return true;
            else if (arr[mid] < 2 * arr[i])
                low = mid + 1;
            else 
                high = mid -1;
        }
        }
        return false;
    }
};