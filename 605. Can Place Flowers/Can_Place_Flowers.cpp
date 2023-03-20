class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        if(n==0)return true;
        int size=flowerbed.size();
        if(size<=1){
            if(flowerbed[0]==0)n--;
            return n<=0;
        }
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            n--;
        }
        for(int i=1;i<size-1;i++){
            if(n==0)return true;
            if(flowerbed[i]==0 && flowerbed[i-1]==0 && flowerbed[i+1]==0){
                flowerbed[i]=1;
                n--;
            }
        }
        if(flowerbed[size-2]==0 && flowerbed[size-1]==0)n--;
        return n<=0;
    }
};
