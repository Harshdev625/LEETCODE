class Solution {
public:
    void helper(TreeNode*root,unordered_map<int,int>&m,int &maxi){
        if(root==NULL){
            return;
        }
        helper(root->left,m,maxi);
        m[root->val]++;
        maxi=max(maxi,m[root->val]);
        helper(root->right,m,maxi);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>m;
        int max=0;
        helper(root,m,max);
        vector<int>v;
        for(auto i:m){
            if(i.second==max)v.push_back(i.first);
        }
        return v;
    }
};
