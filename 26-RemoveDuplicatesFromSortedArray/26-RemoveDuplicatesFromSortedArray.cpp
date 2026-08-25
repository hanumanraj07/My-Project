// Last updated: 8/25/2026, 11:51:24 AM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         if (nums.size() == 0) return 0;

    int k = 0;

    for (int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[k]) {
            k++;
            nums[k] = nums[i];
        }
    }
    return k + 1;
    }
};