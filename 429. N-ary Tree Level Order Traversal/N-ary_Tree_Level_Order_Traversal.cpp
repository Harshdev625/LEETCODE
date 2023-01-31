class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v;
            queue<Node*>a;
            while(!q.empty()){
                v.push_back(q.front()->val);
                for(int i=0;i<q.front()->children.size();i++){
                    a.push(q.front()->children[i]);
                }
                q.pop();
            }
            ans.push_back(v);
            q=a;
        }
        return ans;
    }
};
