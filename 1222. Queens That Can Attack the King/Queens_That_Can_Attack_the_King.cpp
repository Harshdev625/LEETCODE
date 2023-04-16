class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        vector<vector<int>> chess(8, vector<int>(8, 0));
        for (int i = 0; i < queens.size(); i++) {
            chess[queens[i][0]][queens[i][1]] = 1;
        }
        vector<vector<int>> ans;
        int r = king[0], c = king[1];
        for (int i = r - 1; i >= 0; i--) {
            if (chess[i][c] == 1) {
                ans.push_back({i, c});
                break;
            }
        }
        for (int i = r + 1; i < 8; i++) {
            if (chess[i][c] == 1) {
                ans.push_back({i, c});
                break;
            }
        }
        for (int i = c - 1; i >= 0; i--) {
            if (chess[r][i] == 1) {
                ans.push_back({r, i});
                break;
            }
        }
        for (int i = c + 1; i < 8; i++) {
            if (chess[r][i] == 1) {
                ans.push_back({r, i});
                break;
            }
        }
        for (int i = r - 1, j = c + 1; i >= 0 && j < 8; i--, j++) {
            if (chess[i][j] == 1) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = r - 1, j = c - 1; i >= 0 && j >= 0; i--, j--) {
            if (chess[i][j] == 1) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = r + 1, j = c - 1; i < 8 && j >= 0; i++, j--) {
            if (chess[i][j] == 1) {
                ans.push_back({i, j});
                break;
            }
        }
        for (int i = r + 1, j = c + 1; i < 8 && j < 8; i++, j++) {
            if (chess[i][j] == 1) {
                ans.push_back({i, j});
                break;
            }
        }
        return ans;
    }
};
