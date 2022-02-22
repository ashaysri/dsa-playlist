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
    bool hasOne(TreeNode* root){
        if(root==NULL)
            return false;
        bool leftCheck=hasOne(root->left);
        bool rightCheck=hasOne(root->right);
        if(!leftCheck)
            root->left=NULL;
        if(!rightCheck)
            root->right=NULL;
        return root->val==1 || leftCheck || rightCheck;
    }
    TreeNode* pruneTree(TreeNode* root) {
        if(hasOne(root)==false)
            return NULL;
        return root;
    }
};