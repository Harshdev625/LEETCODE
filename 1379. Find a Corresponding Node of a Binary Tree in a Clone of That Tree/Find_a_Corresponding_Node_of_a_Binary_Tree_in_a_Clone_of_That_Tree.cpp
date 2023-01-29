class Solution {
public:
    TreeNode*ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL ||cloned==NULL){
            return NULL;
        }
        if(original->val==target->val){
            ans=cloned;
        }
        getTargetCopy(original->left,cloned->left,target);
        getTargetCopy(original->right,cloned->right,target);
        return ans;
    }
};
