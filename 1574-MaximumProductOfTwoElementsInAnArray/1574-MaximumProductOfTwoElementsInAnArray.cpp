// Last updated: 8/25/2026, 11:45:43 AM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        return ((nums[nums.size()-1]-1)*(nums[nums.size()-2]-1));
    }
};