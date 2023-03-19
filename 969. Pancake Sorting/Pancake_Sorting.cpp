class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> res;
        int n = arr.size();
        int search = n, index;
        while (search > 1) {
            index = 0;
            int flag = 0;
            for (int i = 0; i < search; i++) {
                if (arr[i] != i + 1) {
                    flag = 1;
                }
                if (arr[i] == search) {
                    index = i + 1;
                }
            }
            if (flag == 0) {
                break;
            }
            reverse(arr.begin(), arr.begin() + index);
            res.push_back(index);
            reverse(arr.begin(), arr.begin() + search);
            res.push_back(search);
            search--;
        }
        return res;
    }
};
