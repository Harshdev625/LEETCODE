class Solution {
public:
    bool isValid(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        stack<char> t;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            if (s[i] == 'c') {
                if (t.size() >= 2 && t.top() == 'b') {
                    t.pop();
                    if (t.top() == 'a') {
                        t.pop();
                    } else {
                        t.push('b');
                        t.push(s[i]);
                    }
                } else {
                    t.push(s[i]);
                }
            } else {
                t.push(s[i]);
            }
        }
        return t.empty();
    }
};
