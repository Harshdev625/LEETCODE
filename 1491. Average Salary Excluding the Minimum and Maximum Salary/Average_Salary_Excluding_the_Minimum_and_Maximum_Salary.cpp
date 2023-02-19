class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double total=accumulate(salary.begin()+1,salary.end()-1,0);
        return total/(salary.size()-2);
    }
};
