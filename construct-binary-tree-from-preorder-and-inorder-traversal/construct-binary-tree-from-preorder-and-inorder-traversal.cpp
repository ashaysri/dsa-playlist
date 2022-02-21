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
    int preInd {};
    TreeNode* cTree(vector<int>& pre, vector<int>& in,int is,int ie){
        if(is>ie)
            return NULL;
        TreeNode* node=new TreeNode(pre[preInd++]);
        int inInd;
        for(int i {is};i<=ie;i++){
            if(in[i]==node->val){
                inInd=i;
                break;
            }
        }
        node->left=cTree(pre,in,is,inInd-1);
        node->right=cTree(pre,in,inInd+1,ie);
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return cTree(preorder,inorder,0,inorder.size()-1);
    }
};