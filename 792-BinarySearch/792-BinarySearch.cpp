// Last updated: 8/25/2026, 11:47:19 AM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};