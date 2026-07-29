// Last updated: 7/29/2026, 4:37:29 PM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        sort(nums.begin(), nums.end());
5        int result = nums[0] + nums[1] + nums[2];
6
7        for (int i = 0; i < nums.size() - 2; i++) {
8            int left = i + 1, right = nums.size() - 1;
9
10            while (left < right) {
11                int sum = nums[i] + nums[left] + nums[right];
12
13                if (abs(target - sum) < abs(target - result))
14                    result = sum;
15
16                if (sum == target) return target;
17                else if (sum < target) left++;
18                else right--;
19            }
20        }
21
22        return result;
23    }
24};