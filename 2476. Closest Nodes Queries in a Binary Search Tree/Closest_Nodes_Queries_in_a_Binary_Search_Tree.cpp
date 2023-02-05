class Solution {
public:
    void helper(TreeNode*root,vector<int>&v){
        if(root==NULL){
            return;
        }
        helper(root->left,v);
        v.push_back(root->val);
        helper(root->right,v);
    }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>>ans(queries.size(), vector<int>(2, -1));
        if (!root) return ans;
        vector<int> v;
        helper(root,v);
        for (int i = 0; i < queries.size(); i++) {
            int s = 0, e = v.size() - 1;
            int mid = s + e >> 1;
            
            while (s < e) {
                if (v[mid] >= queries[i]) {
                    e = mid;
                } else {
                    s = mid + 1;
                }
                mid = s + e >> 1;
            }
            
            if (v[s] == queries[i]) {
                ans[i][0] = v[s];
                ans[i][1] = v[s];
            } else {
                if (v[s] > queries[i] && s - 1 >= 0) {
                    ans[i][0] = v[s - 1];
                } else if (v[s] <= queries[i]) {
                    ans[i][0] = v[s];
                }
                if (v[s] < queries[i] && s + 1 <= v.size() - 1) {
                    ans[i][1] = v[s + 1];
                } else if (v[s] >= queries[i]) {
                    ans[i][1] = v[s];
                }
            }
        }
        return ans;
    }
};
