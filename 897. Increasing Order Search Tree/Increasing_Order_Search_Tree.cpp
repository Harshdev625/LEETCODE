class Solution {
public:
    void helper(TreeNode*root,TreeNode*&head,TreeNode*&newhead){
        if(root==NULL){
            return;
        }
        if(root->left){
            helper(root->left,head,newhead);
        }
        TreeNode*temp=new TreeNode(root->val);
        if(head==NULL){
            head=temp;
            newhead=head;
        }
        else {
            head->right=temp;
        }
        head=temp;
        if(root->right)
          helper( root->right,head,newhead);
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode*head=NULL;
        TreeNode*newhead=NULL;
        helper(root,head,newhead);
        return newhead;
    }
};
