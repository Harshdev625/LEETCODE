class Solution {
public:
    int bestClosingTime(string customers) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=customers.size();
        int count=0,index=0;
        int min=count;
         for (int i = 1; i <= n; ++i) {
            if (customers[i-1] == 'Y')count--;
            else count++;
            if(count<min){
                min=count;
                index=i;
            }
        }
        return index;
    }
};
