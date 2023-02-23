class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
       sort(deck.begin(),deck.end());
       int n=deck.size();
       vector<int>v(n,0);
       queue<int>q;
       for(int i=0;i<n;i++)q.push(i);
       int i=0,t;
       while(!q.empty()){
           v[q.front()]=deck[i];
           q.pop();
           t=q.front();
           if(q.empty())break;
           q.push(t);
           q.pop();
           i++;
       }
       return v;
    }
};
