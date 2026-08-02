// Last updated: 8/2/2026, 9:39:39 PM
1class Solution {
2public:
3    int countPairs(vector<int>& nums, int target) {
4        sort(nums.begin(),nums.end());
5        int count = 0;
6        for(int i=0; i<nums.size()-1; i++){
7            for(int j=i+1; j<nums.size(); j++){
8                if(nums[i] + nums[j] < target){
9                    count++;
10                }
11            }
12        }
13        return count;
14    }
15};