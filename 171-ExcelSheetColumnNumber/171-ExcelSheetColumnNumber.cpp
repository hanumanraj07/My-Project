// Last updated: 8/25/2026, 11:49:53 AM
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int result = 0;

        for(char ch : columnTitle){
            result = result * 26 + (ch - 'A' + 1);
        }

        return result;
    }
};