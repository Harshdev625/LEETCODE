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
    void helper(TreeNode*root,string & ans){
        if(!root)return;
        ans+=to_string(root->val);
        if (root->left || root->right) {
            ans.push_back('(');
            helper(root->left, ans);
            ans.push_back(')');
        }
        if (root->right) {
            ans.push_back('(');
            helper(root->right,ans);
            ans.push_back(')');
        }
    }
    string tree2str(TreeNode* root) {
        string ans;
        helper(root,ans);
        return ans;
    }
};
