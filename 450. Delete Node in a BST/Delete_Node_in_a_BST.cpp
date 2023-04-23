class Solution {
public:
    TreeNode* rightmin(TreeNode* root) {
        if (root == NULL) {
            return root;
        }
        if (!root->left && !root->right) {
            return root;
        }
        if (root->left) {
            return rightmin(root->left);
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) {
            return root;
        }
        if (root->val == key) {
            if (!root->left && !root->right) {
                delete root;
                return NULL;
            }
            else if (root->left && !root->right) {
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else if (!root->left && root->right) {
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else {
                TreeNode* node = rightmin(root->right);
                root->val = node->val;
                root->right = deleteNode(root->right, node->val);
                return root;
            }
        }
        if (root->val < key) {
            root->right = deleteNode(root->right, key);
        } else {
            root->left = deleteNode(root->left, key);
        }
        return root;
    }
};
