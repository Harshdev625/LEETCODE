class Solution {
public:
    int countNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int count=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            if(q.front()->left){
                count++;
                q.push(q.front()->left);
            }
            if(q.front()->right){
                count++;
                q.push(q.front()->right);
            }
            q.pop();
        }
        return count;
    }
};
