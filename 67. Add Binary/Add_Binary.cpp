class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0, total = 0;
        string ans;
        int i = a.size() - 1, j = b.size() - 1;
        while (i >= 0 || j >= 0 || carry) {
            total = carry;
            if (i >= 0) {
                total += a[i--] - '0';
            }
            if (j >= 0) {
                total += b[j--] - '0';
            }
            ans.push_back(total % 2 + '0');
            carry = total / 2;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
