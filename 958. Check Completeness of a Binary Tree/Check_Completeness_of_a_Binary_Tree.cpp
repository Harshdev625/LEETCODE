class Solution {
public:
    bool isCompleteTree(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        int flag=0;
        while(!q.empty()){
            queue<pair<TreeNode*,int>>a;
            while(!q.empty()){
                if(q.front().first->left==NULL && q.front().first->right!=NULL ){
                    return false;
                }
                if(q.front().second==1){
                    return false;
                }
                if(q.front().first->left){
                    a.push({q.front().first->left,flag});
                }
                else{
                    flag=1;
                }
                if(q.front().first->right){
                    a.push({q.front().first->right,flag});
                }
                else{
                    flag=1;
                }
                q.pop();
                
            }
            q=a;
        }
        return true;
    }
};
