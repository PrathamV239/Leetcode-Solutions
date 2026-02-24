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

    int Traversal(TreeNode* root, int val){
        if(root == nullptr)
            return 0;
        val = (2*val) + (1* root->val);
        if(root->right == nullptr && root->left == nullptr)
            return val;
        return Traversal(root->right,val) + Traversal(root->left,val);
    }

    int sumRootToLeaf(TreeNode* root) {
        int val =0;
        return Traversal(root,val);
    
    }
};