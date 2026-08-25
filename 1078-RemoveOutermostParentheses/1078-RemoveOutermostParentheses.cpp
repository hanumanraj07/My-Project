// Last updated: 8/25/2026, 11:46:55 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int count = 0;

        for (char ch : s) {
            if (ch == '(') {
                if (count > 0) {
                    ans += ch;
                }
                count++;
            } else {
                count--;
                if (count > 0) {
                    ans += ch;
                }
            }
        }

        return ans;
    }
};