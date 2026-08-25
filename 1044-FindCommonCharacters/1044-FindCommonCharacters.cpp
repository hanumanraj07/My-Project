// Last updated: 8/25/2026, 11:46:59 AM
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;

        for (char ch = 'a'; ch <= 'z'; ch++) {
            int minCount = INT_MAX;

            for (string word : words) {
                int count = 0;

                for (char c : word) {
                    if (c == ch) count++;
                }

                minCount = min(minCount, count);
            }

            while (minCount--) {
                ans.push_back(string(1, ch));
            }
        }

        return ans;
    }
};