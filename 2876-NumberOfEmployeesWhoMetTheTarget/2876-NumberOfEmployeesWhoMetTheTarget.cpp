// Last updated: 8/25/2026, 11:42:42 AM
class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {

        int count = 0;

        for(int i : hours) {

            if(i >= target) {
                count += 1;
            }
        }

        return count;
    }
};