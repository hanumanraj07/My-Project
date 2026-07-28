// Last updated: 7/28/2026, 3:56:58 PM
1class Solution {
2public:
3    int sumOddLengthSubarrays(vector<int>& arr) 
4    {
5        int ans = 0;
6        for(int i=0;i<arr.size();i++)
7        {
8            int sum = 0;
9            int cnt = 0;
10            for(int j=i;j<arr.size();j++)
11            {
12                sum += arr[j];
13                cnt++;
14                if(cnt%2 == 1) ans+=sum;
15            }
16        }
17        return ans;
18    } 
19};