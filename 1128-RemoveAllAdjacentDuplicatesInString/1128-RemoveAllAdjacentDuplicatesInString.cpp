// Last updated: 8/25/2026, 11:46:48 AM
class Solution {
public:
    string removeDuplicates(string s) {

        string ans;

        for (char ch : s) {
            if (!ans.empty() && ans.back() == ch) {
                ans.pop_back();
            } else {
                ans += ch;
            }
        }
        return ans;
    }
};