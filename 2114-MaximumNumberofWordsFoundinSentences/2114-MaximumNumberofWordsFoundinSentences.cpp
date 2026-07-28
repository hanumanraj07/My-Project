// Last updated: 7/28/2026, 4:55:23 PM
1class Solution {
2public:
3    int countQuadruplets(vector<int>& nums) {
4         unordered_map<int, int> ump;
5        int count = 0, n = nums.size();
6        for (int c = 2; c < n-1; c++) {
7            int b = c - 1;
8            for (int a = 0; a < b; a++) {
9                ump[nums[a]+nums[b]]++;
10            }
11            for (int d = c+1; d < n; d++) {
12                count += ump[nums[d]-nums[c]];
13            }
14        }
15        return count;
16    }
17};