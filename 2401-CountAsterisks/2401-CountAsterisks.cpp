// Last updated: 8/25/2026, 11:43:39 AM
class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        bool insidePipe = false;

        for(char ch:s){
            if(ch == '|'){
                insidePipe = !insidePipe ;
            }
            else if(ch == '*' && !insidePipe){
                count++;
            }
        }
        return count;
    }
};