class CBTInserter {
public:
    vector<TreeNode*>v;
    TreeNode*head;
    CBTInserter(TreeNode* root) {
        head=root;
        queue<TreeNode*>q;
        if(root!=NULL){
            q.push(root);
            v.push_back(root);
            while(!q.empty()){
                if(q.front()->left){
                    v.push_back(q.front()->left);
                    q.push(q.front()->left);
                }
                 if(q.front()->right){
                    v.push_back(q.front()->right);
                    q.push(q.front()->right);
                }
                q.pop();
            }
        }
    }
    
    int insert(int val) {
        TreeNode* temp=new TreeNode(val);
        int t=(v.size()-1)/2;
        v.push_back(temp);
        if(v[t]->left){
            v[t]->right=temp;
        }
        else{
            v[t]->left=temp;
        }
        return v[t]->val;
    }
    
    TreeNode* get_root() {
        return head;
    }
};
