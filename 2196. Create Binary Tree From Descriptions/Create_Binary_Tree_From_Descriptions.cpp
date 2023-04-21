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
    void dfs(TreeNode*head,unordered_map<int,TreeNode*>&m){
        if (!head) return;
        if(m[head->val]==NULL)return;
        if(m[head->val]->left){
            head->left=m[head->val]->left;
            dfs(head->left,m);
        }
        if(m[head->val]->right){
            head->right=m[head->val]->right;
            dfs(head->right,m);
        }
    }
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>m;
        unordered_map<int,int>n;
        for(int i=0;i<descriptions.size();i++){
            TreeNode*parent=new TreeNode(descriptions[i][0]);
            n[descriptions[i][1]]++;
            if( m[descriptions[i][0]]==NULL){
                 m[descriptions[i][0]]=parent;
                TreeNode*child=new TreeNode(descriptions[i][1]);
                if(descriptions[i][2]==1){
                    parent->left=child;
                }
                else{
                    parent->right=child;
                }
            }
            else{
                TreeNode*child=new TreeNode(descriptions[i][1]);
                if(descriptions[i][2]==1){
                    m[descriptions[i][0]]->left=child;
                }
                else{
                    m[descriptions[i][0]]->right=child;
                }
            }
        }
        int ans;
        for(int i=0;i<descriptions.size();i++){
            if(n[descriptions[i][0]]==0)ans=descriptions[i][0];
        }
        TreeNode*head=new TreeNode(ans);
        dfs(head,m);
        return head;
    }
};
