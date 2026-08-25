// Last updated: 8/25/2026, 11:51:48 AM
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            while (st.count(s[right])) {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};