/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int total=0;
    ListNode*newhead;
    Solution(ListNode* head) {
        newhead=head;
        ListNode* temp = head;
        while (temp != NULL) {
            total++;
            temp = temp->next;
        }
        srand(time(NULL));
    }
    
    int getRandom() {
        int idx = rand() % total;
        ListNode*temp=newhead;
        while (idx-- > 0 && temp != NULL) {
            temp = temp->next;
        }
        return temp->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
