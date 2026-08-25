// Last updated: 8/25/2026, 11:41:48 AM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> friendSet(friends.begin(), friends.end());
        vector<int> result;

        for (int x : order) {
            if (friendSet.count(x)) {
                result.push_back(x);
            }
        }

        return result;
    }
};