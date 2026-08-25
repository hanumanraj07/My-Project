// Last updated: 8/25/2026, 11:43:27 AM
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<int> idx(names.size());
         
        for (int i = 0; i < idx.size(); i++) {
            idx[i] = i;
        }
         
        sort(idx.begin(), idx.end(), [&](int a, int b) {
            return heights[a] > heights[b];
        });
         
        vector<string> result;
        for (int i : idx) {
            result.push_back(names[i]);
        }
        
        return result;
    }
};