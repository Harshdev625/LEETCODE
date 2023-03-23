/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int findBottomLeftValue(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        queue<TreeNode*>q;
        long long val=root->val;
        q.push(root);
        while(!q.empty()){
            long long v=LLONG_MAX;
            queue<TreeNode*>a;
            while(!q.empty()){
                if(q.front()->left){
                    a.push(q.front()->left);
                    if(v==LLONG_MAX)v=q.front()->left->val;
                }
                if(q.front()->right){
                    a.push(q.front()->right);
                    if(v==LLONG_MAX)v=q.front()->right->val;
                }
                q.pop();
            }
            q=a;
            if(v!=LLONG_MAX)val=v;
        }
        return val;
    }
};
