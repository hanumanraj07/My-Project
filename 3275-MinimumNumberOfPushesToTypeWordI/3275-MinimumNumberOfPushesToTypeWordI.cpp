// Last updated: 8/25/2026, 11:42:25 AM
class Solution {
public:
    int minimumPushes(string A) {
        auto q = A.size() >> 3, r = A.size() & 7;
        return ((q << 2) + r) * (q + 1);
    }
};