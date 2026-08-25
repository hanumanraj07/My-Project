// Last updated: 8/25/2026, 11:41:42 AM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        return max(nums.front(), nums.back());
    }
};