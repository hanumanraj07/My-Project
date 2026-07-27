// Last updated: 7/27/2026, 3:18:43 PM
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4        return max(nums.front(), nums.back());
5    }
6};