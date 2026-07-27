// Last updated: 7/27/2026, 4:05:37 PM
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        int v1 = (coordinates[0]-'a')+1;
5        int v2 = coordinates[1]-'0';
6
7        return (v1 + v2) % 2 == 1;
8    }
9};