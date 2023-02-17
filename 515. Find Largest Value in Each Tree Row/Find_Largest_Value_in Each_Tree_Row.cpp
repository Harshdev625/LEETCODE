class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int m=INT_MIN;
            queue<TreeNode*>a;
            while(!q.empty()){
                m=max(m,q.front()->val);
                if(q.front()->left)a.push(q.front()->left);
                if(q.front()->right)a.push(q.front()->right);
                q.pop();
            }
            q=a;
            ans.push_back(m);
        }
        return ans;
    }
};
