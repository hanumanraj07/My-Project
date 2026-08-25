// Last updated: 8/25/2026, 11:44:05 AM
class Solution {
public:
    bool isSameAfterReversals(int num) {
        return num == 0 || num % 10 != 0;
    }
};