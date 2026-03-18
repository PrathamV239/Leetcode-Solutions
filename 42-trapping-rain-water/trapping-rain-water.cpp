

class Solution {
public:
    int trap(vector<int>& height) {
       int n = height.size();
       int leftmax =0;
       int rightmax = 0;
       int left = 0; 
       int right = n-1;
       int total =0;
       
       while (left <= right ){
        if(height[left] <= height[right]){
            if(height[left] >= leftmax){
                leftmax = height[left];
            }
            else 
                total = total + leftmax - height[left];
            left++;    
        }
        else{
            if(height[right] >= rightmax){
                rightmax = height[right];
            }else
                total = total + rightmax - height[right];

            right--;
        }
       }
       return total;       
    }
};





// Brute force 

 // int n = height.size();
        // int total = 0;

        // for (int i = 0; i < n; i++) { // iterating over each element

        //     int maxleft = 0;
        //     int maxright = 0;

        //     for (int j = 0; j <= i; j++) { // iterating from left till the element for maxleft 
        //         if(height[j] > maxleft)
        //             maxleft = height[j];
        //     }
        //     for(int k = i; k < n; k++){  //iterating from ele till end for maxright
        //         if(height[k] > maxright)
        //             maxright = height[k];
        //     }

        //     total = total + min(maxright,maxleft) - height[i];
        // }
        // return total;