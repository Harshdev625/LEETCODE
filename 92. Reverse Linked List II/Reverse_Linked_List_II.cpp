class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        stack<ListNode*>s;
        s.push(head);
        head=head->next;
        while(head!=NULL){
            while(!s.empty() && s.top()->val < head->val){
                s.pop();
            }
            s.push(head);
            head=head->next;
        }
        ListNode*newhead=NULL;
        while(!s.empty()){
            ListNode*temp=s.top();
            s.pop();
            if(newhead==NULL){
                newhead=temp;
            }
            else{
                temp->next=newhead;
                newhead=temp;
            }
        }
        return newhead;
    }
};
