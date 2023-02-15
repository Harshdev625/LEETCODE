class Solution {
public:
    void helper(TreeNode*root ,vector<int>&v){
        if(root==NULL){
            return;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    int getMinimumDifference(TreeNode* root) {
       vector<int>v;
       helper(root,v);
       int ans=10001;
       for(int i=1;i<v.size();i++){
           ans=min(ans,v[i]-v[i-1]);
       }
       return ans;
    }
};
