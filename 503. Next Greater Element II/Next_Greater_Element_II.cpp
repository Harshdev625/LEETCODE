#define ll long long  
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define vll vector<long long>
#define mii map<int, int>
#define pb push_back
#define f first
#define s second
#define nl "\n"
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define INF 1e9
class Solution {
public:
    vi nextGreaterElements(vi& nums) {
        int n=nums.size();
        stack<int>s;
        vi ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            if(s.empty()){
                ans[i%n]=-1;
            }
            else{
                while(!s.empty() && s.top()<=nums[i%n]){
                    s.pop();
                }
                if(!s.empty()){
                    ans[i%n]=s.top();
                }
                else{
                    ans[i%n]=-1;
                }
            }
            s.push(nums[i%n]);
        }
        return ans;
    }
};
