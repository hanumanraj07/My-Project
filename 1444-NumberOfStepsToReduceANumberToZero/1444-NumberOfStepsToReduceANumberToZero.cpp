// Last updated: 8/25/2026, 11:46:09 AM
class Solution {
public:
    int numberOfSteps(int num) {
        int steps = 0;

        while (num > 0) {
            if (num % 2 == 0) {
                num /= 2;
            } else {
                num -= 1;
            }

            steps++;
        }
        return steps;
    }
};