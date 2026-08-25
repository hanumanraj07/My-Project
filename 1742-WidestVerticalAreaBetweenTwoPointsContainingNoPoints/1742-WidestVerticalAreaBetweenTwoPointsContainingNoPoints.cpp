// Last updated: 8/25/2026, 11:45:17 AM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int diff =0;
        for(int i =1;i<points.size();i++){
            diff = max(diff,points[i][0]-points[i-1][0]);
        }
        return diff;
    }
};


