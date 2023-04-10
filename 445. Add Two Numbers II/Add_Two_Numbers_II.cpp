class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int>a,b;
        while(l1!=NULL){
            a.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            b.push_back(l2->val);
            l2=l2->next;
        }
        vector<int>total;
        int i=a.size()-1,j=b.size()-1,carry=0;
        for(;i>=0 && j>=0;i--,j--){
            int sum=carry+b[j]+a[i];
            total.push_back(sum%10);
            carry=sum/10;
        }
        while(i>=0){
            int sum=carry+a[i];
            total.push_back(sum%10);
            carry=sum/10;
            i--;
        }
        while(j>=0){
            int sum=carry+b[j];
            total.push_back(sum%10);
            carry=sum/10;
            j--;
        }
        if(carry){
            total.push_back(carry);
        }
        ListNode*head=NULL,*t=NULL;
        for(int i=total.size()-1;i>=0;i--){
            ListNode*node = new ListNode(total[i]);
            if(head==NULL){
                head=node;
                t=node;
            }
            else{
                t->next=node;
                t=t->next;
            }
        }
        return head;
    }
};
