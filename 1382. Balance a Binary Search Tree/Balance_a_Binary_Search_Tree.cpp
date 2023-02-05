class Solution {
public:
    TreeNode* helper2(const vector<int>& nums, int start, int end) {
        if(start>end){
            return NULL;
        }
        int mid = (start+end) >> 1;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = helper2(nums, start, mid-1);
        root->right = helper2(nums, mid+1, end);
        return root;
    }
    void helper(TreeNode*root,vector<int>&v){
        if(root==NULL){
            return;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int>v;
        helper(root,v);
        TreeNode*head=helper2(v,0,v.size()-1);
        return head;
    }
};
