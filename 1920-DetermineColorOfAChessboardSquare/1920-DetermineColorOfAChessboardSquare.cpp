// Last updated: 8/25/2026, 11:44:45 AM
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int v1 = (coordinates[0]-'a')+1;
        int v2 = coordinates[1]-'0';

        return (v1 + v2) % 2 == 1;
    }
};