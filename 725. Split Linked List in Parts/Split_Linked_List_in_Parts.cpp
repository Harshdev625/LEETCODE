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
    int linked_list_length(ListNode*head){
        int length=0;
        while(head!=NULL){
            length++;
            head=head->next;
        }
        return length;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int length=linked_list_length(head);
        int q=length/k;
        int r=length%k;
        vector<ListNode*>v;
        ListNode*newNode= head;
        if(q==0){
            while(k--){
                ListNode*Node= NULL;
                if(head)Node= new ListNode(head->val);
                if(head)head=head->next;
                v.push_back(Node);
            }
        }
        else{
            while(k--){
                if(r){
                    int t=q;
                    ListNode*Newhead= new ListNode(head->val);
                    ListNode*temp=Newhead;
                    while(t--){
                        head=head->next;
                        ListNode*Node= new ListNode(head->val);
                        temp->next=Node;
                        temp=temp->next;
                    }
                    head=head->next;
                    temp->next=NULL;
                    v.push_back(Newhead);
                    r--;
                }
                else{
                    ListNode*Newhead= new ListNode(head->val);
                    ListNode*temp=Newhead;
                    int t=q;
                    while(--t){
                        head=head->next;
                        ListNode*Node= new ListNode(head->val);
                        temp->next=Node;
                        temp=temp->next;
                    }
                    head=head->next;
                    temp->next=NULL;
                    v.push_back(Newhead);
                }
            }
        }
        return v;
    }
};
