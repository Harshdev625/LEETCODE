class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        if(root==NULL){
            return root;
        }
        TreeNode*newhead=root;
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            vector<TreeNode*>v;
            queue<TreeNode*>s;
            while(!q.empty()){
                v.push_back(q.front());
                if(q.front()->left){
                    s.push(q.front()->left);
                }
                if(q.front()->right){
                    s.push(q.front()->right);
                }
                q.pop();
            }
            if(i%2==1){
                for(int i=0,j=v.size()-1;j>i;j--,i++){
                    int temp=v[i]->val;
                    v[i]->val=v[j]->val;
                    v[j]->val=temp;
                }
            }
            q=s;
            i++;
        }
        return newhead;
    }
};
