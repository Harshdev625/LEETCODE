class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
        if(root!=NULL){
            root->left= pruneTree(root->left);
            root->right= pruneTree(root->right);
            if(root->val==0 && !root->right && !root->left)return NULL;
        }
        return root;
    }
};
