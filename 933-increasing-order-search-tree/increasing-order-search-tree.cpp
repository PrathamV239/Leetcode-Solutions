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
    TreeNode* newRoot;
    TreeNode* current;
    void traverse(TreeNode* root){
        if(root == nullptr) return;
        traverse(root->left);
        if (newRoot == nullptr){
            newRoot = new TreeNode(root->val);
            current = newRoot;
        }
        else{
            
            current -> right = new TreeNode(root->val);
            current = current ->right;
        }
        traverse(root->right);

    }
    TreeNode* increasingBST(TreeNode* root) {
        newRoot =nullptr;
        traverse(root);
        return newRoot;
    }
};