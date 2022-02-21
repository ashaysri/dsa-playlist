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
    int postInd;
    TreeNode* cTree(vector<int>& in, vector<int>& post,int is,int ie){
        if(is>ie)
            return NULL;
        TreeNode* node=new TreeNode(post[postInd--]);
        int inInd;
        for(int i {is};i<ie;i++){
            if(in[i]==node->val){
                inInd=i;
                break;
            }
        }
        node->right=cTree(in,post,inInd+1,ie);
        node->left=cTree(in,post,is,inInd-1);
        return node;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postInd=postorder.size()-1;
        return cTree(inorder,postorder,0,inorder.size()-1);
    }
};