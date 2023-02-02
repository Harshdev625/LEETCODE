class Solution {
public:
    void helper(TreeNode*root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        helper(root,ans);
        int t=ans.size();
        for(int i=0,j=ans.size()-1;j>i;){
            if(ans[i]+ans[j]==k){
                return true;
            }
            else if(ans[i]+ans[j]>k){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
