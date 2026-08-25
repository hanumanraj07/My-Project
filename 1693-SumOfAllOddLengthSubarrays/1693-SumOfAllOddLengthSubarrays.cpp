// Last updated: 8/25/2026, 11:45:20 AM
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) 
    {
        int ans = 0;
        for(int i=0;i<arr.size();i++)
        {
            int sum = 0;
            int cnt = 0;
            for(int j=i;j<arr.size();j++)
            {
                sum += arr[j];
                cnt++;
                if(cnt%2 == 1) ans+=sum;
            }
        }
        return ans;
    } 
};