// Last updated: 8/17/2026, 3:02:53 PM
1class Solution {
2public:
3    int longestSubsequence(vector<int>& nums) {
4        auto tot = 0, nonZero = 0;
5
6        for (auto& n : nums) {
7            nonZero |= n > 0;
8            tot ^= n;
9        }
10
11        return nonZero * (nums.size() - !tot);
12    }
13};