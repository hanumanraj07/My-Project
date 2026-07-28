// Last updated: 7/28/2026, 3:03:55 PM
1class Solution {
2public:
3    vector<int> numberGame(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        
6        vector<int> arr;
7        
8        for(int i=0; i<nums.size(); i+=2){
9            arr.push_back(nums[i+1]);
10            arr.push_back(nums[i]);
11        }
12        return arr;
13    }
14};  