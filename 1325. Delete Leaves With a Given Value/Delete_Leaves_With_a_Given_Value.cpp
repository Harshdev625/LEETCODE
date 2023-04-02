class Solution {
public:
    bool dfs(TreeNode*root,int target){
        if(!root)return false;
        bool left=dfs(root->left,target);
        bool right=dfs(root->right,target);
        if(left)root->left=NULL;
        if(right)root->right=NULL;
        return root->val==target && !root->left && !root->right;
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        bool ans=dfs(root,target);
        if(ans)return NULL;
        return root; 
    }
};
