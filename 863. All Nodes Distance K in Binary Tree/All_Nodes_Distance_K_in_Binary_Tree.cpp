/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, TreeNode*>parent;
    void makeParent(TreeNode* root){
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            auto node = q.front();
            q.pop();

            if(node->left){
                parent[node->left]=node;
                q.push(node->left);
            }
            if(node->right){
                parent[node->right]=node;
                q.push(node->right);
            }
        }
        return;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        parent.clear();
        makeParent(root);
        queue<TreeNode*>q;
        q.push(target);
        unordered_map<TreeNode*, int>isvis;
        isvis[target]=1;
        vector<int>ans;
        int dis=0;
        while(!q.empty()){
            int k1 = q.size();
            while(k1--){
                TreeNode* node = q.front();
                q.pop();
                if(dis==k){
                    ans.push_back(node->val);
                    continue;
                }

                if(node->left && isvis[node->left]==0){
                    isvis[node->left]=1;
                    q.push(node->left);
                }
                if(node->right && isvis[node->right]==0){
                    isvis[node->right]=1;
                    q.push(node->right);
                }
                if(parent[node] && isvis[parent[node]]==0){
                    isvis[parent[node]]=1;
                    q.push(parent[node]);
                }
            }
            dis++;
        }
        return ans;
    }
};
