// Last updated: 8/17/2026, 3:05:14 PM
1
2class Solution {
3public:
4    int minIncrementForUnique(vector<int>& nums) {
5        sort(nums.begin(),nums.end());
6        int ans = 0;
7        for(int i=1;i<nums.size();i++){
8            if(nums[i]<=nums[i-1]){
9                ans += nums[i-1]-nums[i]+1;
10                nums[i]= nums[i-1]+1;
11            }
12        }
13        return ans;
14        }
15};