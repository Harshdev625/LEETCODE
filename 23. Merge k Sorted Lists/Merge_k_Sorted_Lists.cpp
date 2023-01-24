class Solution {
public:
    ListNode* merge (ListNode*a,ListNode*b){
        if(a==NULL){
            return b;
        }
        if(b==NULL){
            return a;
        }
        ListNode*head;
        if(a->val> b->val){
            head=b;
            b=b->next;
        }
        else{
            head=a;
            a=a->next;
        }
        ListNode*temp=head;
        while(a!=NULL && b!=NULL){
            if(a->val> b->val){
                temp->next=b;
                b=b->next;
                temp=temp->next;
            }
            else{
                temp->next=a;
                a=a->next;
                temp=temp->next;
            }
        }
        if(a!=NULL){
            temp->next=a;
        }
        if(b!=NULL){
            temp->next=b;
        }
        return head;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        ListNode*a=lists[0],*b=NULL;
        lists[0]=merge(a,b);
        for(int i=1;i<lists.size();i++){
            lists[i]=merge(lists[i],lists[i-1]);
        }
        return lists[lists.size()-1];
    }
};
