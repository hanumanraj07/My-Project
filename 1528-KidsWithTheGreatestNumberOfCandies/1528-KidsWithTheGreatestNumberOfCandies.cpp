// Last updated: 8/25/2026, 11:45:50 AM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool> ans;

        for(int i=0; i<candies.size(); i++){
            int maxCandy = *max_element(candies.begin(), candies.end());
            int sum = candies[i]+ extraCandies;
            if(sum >= maxCandy){
                ans.push_back(true);
            }
            else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};