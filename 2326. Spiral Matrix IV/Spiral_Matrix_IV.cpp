class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>matrix(m,vector<int>(n,-1));
        int row=m-1;
        int col=n-1;
        int i=0,j=0,r,c;
        while(head!=NULL && i<=row && j<=col){
            r=i;c=j;
            while(c<=col && head!=NULL){
                matrix[r][c]=head->val;
                head=head->next;
                c++;
            }
            i++;
            r=i;c=col;
            while(r<=row && head!=NULL){
                matrix[r][c]=head->val;
                head=head->next;
                r++;
            }
            col--;
            r=row;c=col;
            while(c>=j && i<=row && head!=NULL){
                matrix[r][c]=head->val;
                head=head->next;
                c--;
            }
            row--;
            r=row,c=j;
            while(r>=i && j<=col && head!=NULL){
                matrix[r][c]=head->val;
                head=head->next;
                r--;
            }
            j++;
        }
        return matrix;
    }
};
