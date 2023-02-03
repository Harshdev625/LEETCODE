class Solution {
public:
    vector<string> res ;
    void dfs( TreeNode* node ,string path ){

        if( node->left == NULL && node->right == NULL ) 
            res.push_back(path + to_string(node->val)) ;
            if(node->left)
            dfs( node->left ,  path + to_string(node->val) + "->") ;
            if(node->right)
            dfs( node->right ,  path + to_string(node->val)+ "->") ;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        dfs(root , "") ;
        return res ;
    }
};
