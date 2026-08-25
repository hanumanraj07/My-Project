// Last updated: 8/25/2026, 11:42:34 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;

        for(int i = 0; i < words.size(); i++){
            if(words[i].find(x) != string::npos){
                ans.push_back(i);
            }
        }
        return ans;
    }
};