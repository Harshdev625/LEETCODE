class Solution {
public:
    int helper(TreeNode*root,int &ans,int max){
        if(root==NULL){
            return 0;
        }
        if(root->val>=max){
            max=root->val;
        }
        if(max==root->val){
            ans+=1;
        }
        helper(root->left,ans,max);
        helper(root->right,ans,max);
        return ans;
    }
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int ans=0;
        int max=INT_MIN;
        return helper(root,ans,max);
    }
};
