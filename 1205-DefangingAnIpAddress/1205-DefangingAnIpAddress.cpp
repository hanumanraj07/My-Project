// Last updated: 8/25/2026, 11:46:41 AM
class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";

        for(char c : address){
            if(c == '.')
                ans +=  "[.]";

                else
                    ans += c;
        }
        return ans;
    }
};