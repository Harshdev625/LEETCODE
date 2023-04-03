class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        queue<TreeNode*>q;
        q.push(root);
        int res=0,level=0;
        long long sum=LLONG_MIN;
        while(!q.empty()){
            queue<TreeNode*>a;
            long long ans=0;
            while(!q.empty()){
                if(q.front()->left){
                    a.push(q.front()->left);
                }
                if(q.front()->right){
                    a.push(q.front()->right);
                }
                ans+=q.front()->val;
                q.pop();
            }
            q=a;
            level++;
            if(ans>sum){
                sum=ans;
                res=level;
            }
        }
        return res;
    }
};
