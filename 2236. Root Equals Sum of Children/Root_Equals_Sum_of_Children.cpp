class Solution {
public:
    bool checkTree(TreeNode* root) {
        if(root==NULL){
            false;
        }
        if(root->left==NULL){
            return false;
        }
        if(root->right==NULL){
            return false;
        }
        return root->val == root->left->val + root->right->val;
    }
};
