// Last updated: 7/28/2026, 3:33:37 PM
1class Solution {
2public:
3    int differenceOfSum(vector<int>& nums) {
4        int Esum=0;
5        int Dsum=0;
6        for(int i=0; i<nums.size(); i++){
7            Esum += nums[i];
8            if(nums[i]>9){
9                while(nums[i] != 0){
10                    Dsum += nums[i]%10;
11                    nums[i]/=10;
12                }
13                continue;
14            }
15            Dsum += nums[i];
16        }
17        return abs(Dsum - Esum);
18    }
19};