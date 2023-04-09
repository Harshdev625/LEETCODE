class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(!head || !head->next)return head;
        ListNode*newhead=NULL;
        ListNode*a=NULL;
        ListNode*temp=head->next;
        bool flag=false;
        while(temp!=NULL ){
            if( temp->val==head->val ){
                flag=true;
            }
            else{
                if(flag==true){
                    flag=false;
                }
                else{
                    ListNode*newnode = new ListNode(head->val);
                    if(newhead==NULL){
                        newhead=newnode;
                        a=newhead;
                    }
                    else{
                        a->next=newnode;
                        a=a->next;
                    }
                }
            }
            temp=temp->next;
            head=head->next;
        }
        if(!flag){
                ListNode*newnode = new ListNode(head->val);
                if(newhead==NULL){
                    newhead=newnode;
                    a=newhead;
                }
                else{
                    a->next=newnode;
                    a=a->next;
                }
        }
        return newhead;
    }
};
