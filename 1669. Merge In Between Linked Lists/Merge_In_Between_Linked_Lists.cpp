class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*head=list1;
        ListNode*temp1=list1;
        int inc=0;
        ListNode*head1=NULL,*tail1=NULL;
        while(temp1!=nullptr){
            if(inc==a-1){
                head1=temp1;
            }
            if(inc==b){
                tail1=temp1->next;
                break;
            }
            temp1=temp1->next;
            inc++;
        }
        ListNode*temp=list2;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        head1->next=list2;
        temp->next=tail1;
        return head;
    }
};
