// Last updated: 8/16/2026, 7:38:52 PM
1class Solution {
2public:
3    bool stoneGameIX(vector<int>& stones) {
4        int f[3] = {0, 0, 0};
5
6        for (auto& s : stones)
7            f[s % 3]++;
8
9        if (~f[0] & 1)
10            return min(f[1], f[2]) >= 1;
11
12        return abs(f[1] - f[2]) >= 3;
13    }
14};