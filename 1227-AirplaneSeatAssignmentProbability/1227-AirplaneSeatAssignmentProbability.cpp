// Last updated: 7/27/2026, 3:36:34 PM
1class Solution {
2public:
3    int maxProduct(vector<int>& nums) {
4        
5        sort(nums.begin(), nums.end());
6        return ((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
7    }
8};