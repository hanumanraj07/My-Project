// Last updated: 8/25/2026, 11:47:29 AM
class Solution {
public:
    string toLowerCase(string s) {
      for(char &c : s){
        c = tolower(c);
      }  
      return s;
    }
};