class Solution {
public:
    void helper(TreeNode*root,int t,int &sum){
        if (root == NULL) {
            return;
        }
        t = t * 10 + root->val;
        if (root->left == NULL && root->right == NULL) {
            sum += t;
            return;
        }
        helper(root->left, t, sum);
        helper(root->right, t, sum);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        helper(root,0,sum);
        return sum;
    }
};
