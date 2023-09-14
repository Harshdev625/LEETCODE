class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        ios_base::sync_with_stdio(0);
        cin.tie(NULL);
        cout.tie(NULL);
        int m = box.size(), n = box[0].size();
        vector<vector<char>> res(n, vector<char>(m, '.'));

        for (int i = 0; i < m; i++) {
            int end = n - 1;
            for (int j = n - 1; j >= 0; j--) {
                if (box[i][j] != '.') {
                    end = box[i][j] == '*' ? j : end;
                    res[end--][m - i - 1] = box[i][j];
                }
            }
        }
        return res;
    }
};
