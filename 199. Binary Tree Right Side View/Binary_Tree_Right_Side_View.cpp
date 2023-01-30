class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            queue<TreeNode*>v;
            vector<int>v1;
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
            ans.push_back(v1.back());
            q=v;
        }
        return ans;
    }
};
