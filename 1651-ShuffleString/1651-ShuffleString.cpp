// Last updated: 8/25/2026, 11:45:23 AM
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans = s;

        for(int i = 0; i < s.size(); i++){
            ans[indices[i]] = s[i];
        }
        return ans;
    }
};