/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* current = root;
        if(current == nullptr){
             return new TreeNode(val);
        }
        else if (current -> val > val ){
          current->left= insertIntoBST(current ->left, val);
        }
        else {
            current -> right = insertIntoBST(current -> right, val);
        }
        return root;

    }
};