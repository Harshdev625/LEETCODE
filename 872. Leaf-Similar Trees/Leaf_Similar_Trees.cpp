class Solution {
public:
    void helper(TreeNode*root,vector<int>&v){
        if(root==NULL){
            return;
        }
        helper(root->left,v);
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
        }
        helper(root->right,v);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>v1;
        vector<int>v2;
        helper(root1,v1);
        helper(root2,v2);
        if(v1.size()!=v2.size()){
            return false;
        }
        for(int i=0;i<v1.size();i++){
            if(v1[i]!=v2[i]){
                return false;
            }
        }
        return true;
    }
};
