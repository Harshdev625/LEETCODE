class Solution {
public:
    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1)v[leftChild[i]]++;
            if(rightChild[i]!=-1)v[rightChild[i]]++;
        }
        int root,count=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                count++;
                root=i;
            }
        }
        if(count!=1)return false;
        vector<bool>visited(n,false);
        queue<int>q;
        q.push(root);
        while(!q.empty()){
            if(visited[q.front()])return false;
            visited[q.front()]=true;
            if(leftChild[q.front()]!=-1){
                q.push(leftChild[q.front()]);
            }
            if(rightChild[q.front()]!=-1){
                q.push(rightChild[q.front()]);
            }
            q.pop();
        }
        for(int i=0;i<n;i++)if(!visited[i])return false;
        return true;
    }
};
