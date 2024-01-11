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
    int ans=0;
    void dfs(TreeNode*root,int mini,int maxi){
        if(!root){
            int t=abs(maxi-mini);
            ans=max(ans,t);
            return;
        };
        mini=min(mini,root->val);
        maxi=max(maxi,root->val);
        int t=abs(maxi-mini);
        ans=max(ans,t);
        dfs(root->left,mini,maxi);
        dfs(root->right,mini,maxi);
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root,100001,-100001);
        return ans;
    }
};
