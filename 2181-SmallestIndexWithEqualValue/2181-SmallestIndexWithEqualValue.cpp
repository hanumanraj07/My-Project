// Last updated: 8/25/2026, 11:44:15 AM
class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            if(i % 10 == nums[i]){
                return i;
            }
        }
        return -1;
    }
};