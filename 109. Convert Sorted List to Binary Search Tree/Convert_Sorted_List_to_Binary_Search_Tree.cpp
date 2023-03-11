class Solution {
public:
    TreeNode* helper(ListNode* &head, int start, int end) {
        if(start > end){
            return NULL;
        }
        int mid = (start + end) >> 1;
        TreeNode* left = helper(head, start, mid - 1);
        TreeNode* root = new TreeNode(head->val);
        head = head->next;
        root->left = left;
        root->right = helper(head, mid + 1, end);
        return root;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int size = 0;
        for(auto i = head; i ; i = i->next){
            size++;
        }
        return helper(head, 0, size-1);
    }
};
