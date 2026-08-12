// Last updated: 8/12/2026, 3:17:22 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        sort(points.begin(),points.end());
5        int diff =0;
6        for(int i =1;i<points.size();i++){
7            diff = max(diff,points[i][0]-points[i-1][0]);
8        }
9        return diff;
10    }
11};
12
13
14