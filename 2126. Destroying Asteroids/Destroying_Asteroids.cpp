class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        sort(asteroids.begin(),asteroids.end());
        long long sum=mass;
        int n=asteroids.size();
        for(int i=0;i<n;i++){
            if(sum>=asteroids[n-1])return true;
            if(sum<asteroids[i])return false;
            sum+=asteroids[i];
        }
        return sum>=asteroids[n-1];
    }
};
