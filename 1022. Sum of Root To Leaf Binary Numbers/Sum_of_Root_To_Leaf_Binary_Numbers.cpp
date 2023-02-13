class Solution {
public:
    void helper(TreeNode*root,long long val, long long &ans){
        if(root==NULL){
            return ;
        }
        if(root->val==1){
            val*=2;
            val+=1;
        }
        else{
            val*=2;
        }
        if(root->left==NULL && root->right==NULL){
            ans+=val;
        }
        helper(root->left,val,ans);
        helper(root->right,val,ans);
    }
    int sumRootToLeaf(TreeNode* root) {
        long long ans=0;
        helper(root,0,ans);
        return ans;
    }
};
