class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return root;
        }
        Node*newhead=root;
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            queue<Node*>v;
            while(!q.empty()){
                Node*temp=q.front();
                if(temp->left){
                    v.push(temp->left);
                }
                if(temp->right){
                    v.push(temp->right);
                }
                q.pop();
                if(!q.empty()){
                    temp->next=q.front();
                }
                else{
                    temp->next=NULL;
                }
            }
            q=v;
        }
        return newhead;
    }
};
