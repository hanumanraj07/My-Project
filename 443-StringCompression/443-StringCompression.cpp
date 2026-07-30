// Last updated: 7/30/2026, 3:27:26 PM
1class Solution {
2public:
3    string compressedString(string word) {
4        string comp = "";
5        int cnt = 1, n = word.size();
6        char ch = word[0];
7        for(int i=1;i<n;i++){
8            if(word[i] == ch && cnt < 9)cnt++;
9            else{
10                comp.push_back(cnt+'0');
11                comp.push_back(ch);
12                ch = word[i];
13                cnt = 1;
14            }
15        }
16        comp.push_back(cnt+'0');
17        comp.push_back(ch);
18        return comp;
19    }
20};