// Last updated: 8/25/2026, 11:43:12 AM
class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int Esum=0;
        int Dsum=0;
        for(int i=0; i<nums.size(); i++){
            Esum += nums[i];
            if(nums[i]>9){
                while(nums[i] != 0){
                    Dsum += nums[i]%10;
                    nums[i]/=10;
                }
                continue;
            }
            Dsum += nums[i];
        }
        return abs(Dsum - Esum);
    }
};