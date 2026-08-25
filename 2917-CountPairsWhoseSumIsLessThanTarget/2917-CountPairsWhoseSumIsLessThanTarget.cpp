// Last updated: 8/25/2026, 11:42:39 AM
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count = 0;
        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i] + nums[j] < target){
                    count++;
                }
            }
        }
        return count;
    }
};