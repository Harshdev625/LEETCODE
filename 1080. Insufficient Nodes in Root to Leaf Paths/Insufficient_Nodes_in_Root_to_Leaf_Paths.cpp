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
    bool helper(TreeNode*root,int limit,int sum){
        if(root==NULL)return false;
        sum+=root->val;
        if(root && !root->left && !root->right){
            if(sum<limit){
                return true;
            }
            return false;
        }
        bool left=helper(root->left,limit,sum);
        bool right=helper(root->right,limit,sum);
        if(left){
            sum-=root->left->val;
            root->left=NULL;
        }
        if(right){
            sum-=root->right->val;
            root->right=NULL;
        }
        return root->left == NULL && root->right == NULL;
    }
    TreeNode* sufficientSubset(TreeNode* root, int limit) {
        int sum=0;
        if(helper(root,limit,sum))return NULL;
        return root;
    }
};
