class FindElements {
public:
    unordered_map<int,int>m;
    FindElements(TreeNode* root) {
        if(root!=NULL && root->val==-1){
            queue<TreeNode*>q;
            root->val=0;
            m[root->val]=1;
            q.push(root);
            while(!q.empty()){
                queue<TreeNode*>a;
                while(!q.empty()){
                    if(q.front()->left ){
                        q.front()->left->val=q.front()->val*2 +1;  
                        m[q.front()->left->val]=1;
                        a.push(q.front()->left);           
                    }
                    if(q.front()->right ){
                        q.front()->right->val=q.front()->val*2 +2;   
                        m[q.front()->right->val]=1;
                        a.push(q.front()->right);           
                    }
                    q.pop();
                }
                q=a;
            }
        }
    }
    
    bool find(int target) {
        return m[target]==1;
    }
};
