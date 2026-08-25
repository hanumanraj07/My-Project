// Last updated: 8/25/2026, 11:44:22 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx = word.find(ch);

        if(idx != string::npos){
            reverse(word.begin(), word.begin() + idx + 1);
        }

        return word;
    }
};