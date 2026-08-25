// Last updated: 8/25/2026, 11:43:08 AM
class Solution {
public:
    int maxScore(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());

        long long sum = 0;
        int count = 0;

        for(int num : nums){
            sum += num;

            if(sum > 0)
            count++;
        }

        return count;
    }
};