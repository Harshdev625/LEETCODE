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
    unordered_map<int,vector<int>>m;
    void adjacentnodes(TreeNode*root,int parent){
        if(!root)return;
        adjacentnodes(root->left,root->val);
        adjacentnodes(root->right,root->val);
        if(root->left){
            m[root->val].push_back(root->left->val);
        }
        if(root->right){
            m[root->val].push_back(root->right->val);
        }
        if (parent != -1) {
            m[root->val].push_back(parent);
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        adjacentnodes(root,-1);
        vector<int>visited(100001,0);
        int count=0;
        queue<int>q;
        q.push(start);
        visited[start]=1;
        while(!q.empty()){
            queue<int>a;
            while(!q.empty()){
                int t=q.front();
                q.pop();
                for(int i=0;i<m[t].size();i++){
                    if(!visited[m[t][i]]){
                        visited[m[t][i]]=1;
                        a.push(m[t][i]);
                    }
                }
            }
            if(a.size()){
                count++;
            }
            q=a;
        }
        return count;
    }
};
