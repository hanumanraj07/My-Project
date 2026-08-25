// Last updated: 8/25/2026, 11:44:51 AM
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        res.reserve(word1.length() + word2.length()); 
        
        int i = 0;
        while(i < word1.length() || i < word2.length()){
            if(i < word1.length()){
                res += word1[i];
            }
            if(i < word2.length()){
                res += word2[i];
            }
            i++;
        } 
        return res;
    }
};