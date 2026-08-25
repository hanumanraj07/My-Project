// Last updated: 8/25/2026, 11:48:10 AM
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if (p.length() > s.length()) return {};

        vector<int> pCount(26, 0);
        vector<int> window(26, 0);
        vector<int> ans;
 
        for (int i = 0; i < p.length(); i++) {
            pCount[p[i] - 'a']++;
            window[s[i] - 'a']++;
        }
 
        if (pCount == window) {
            ans.push_back(0);
        }
 
        int left = 0;
        for (int right = p.length(); right < s.length(); right++) { 
            window[s[right] - 'a']++; 
            window[s[left] - 'a']--;
            
            left++;
 
            if (pCount == window) {
                ans.push_back(left);
            }
        }

        return ans;
    }
};