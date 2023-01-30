class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v1;
            queue<TreeNode*>v;
            int size=q.size();
            while(!q.empty()){
                v1.push_back(q.front()->val);
                if(q.front()->left){
                    v.push(q.front()->left);
                }
                if(q.front()->right){
                    v.push(q.front()->right);
                }
                q.pop();
            }
            ans.push_back(v1);
            q=v;
        }
        return ans;
    }
};
