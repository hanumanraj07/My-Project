// Last updated: 8/25/2026, 11:49:36 AM
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();

        k = k%n;

        reverse(nums.begin(), nums.end());

        reverse(nums.begin(),nums.begin() + k);

        reverse(nums.begin() + k, nums.end());
    }
};