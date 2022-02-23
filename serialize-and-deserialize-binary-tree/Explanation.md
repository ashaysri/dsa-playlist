### Solution Explained

I have used 'N' to represent `NULL` and serialized the tree in preorder type format (root,left,right).
For deserializing , converted the string to stringstream object which facilitates easy extraction of data from the string.

```
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root==NULL)
            return "N";
        return to_string(root->val)+" "+serialize(root->left)+" "+serialize(root->right);
    }
    TreeNode* deserializer(stringstream& ss){
        string curr;
        ss>>curr;
        if(curr=="N"){
            return NULL;
        }
        else{
            TreeNode* root=new TreeNode(stoi(curr));
            root->left=deserializer(ss);
            root->right=deserializer(ss);
            return root;
        }
    }
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializer(ss);
    }
};
```
