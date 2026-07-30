// Last updated: 7/30/2026, 3:56:31 PM
1class Solution {
2public:
3    int minimumPushes(string A) {
4        auto q = A.size() >> 3, r = A.size() & 7;
5        return ((q << 2) + r) * (q + 1);
6    }
7};