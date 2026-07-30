// Last updated: 7/30/2026, 3:26:55 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int i = 0, idx = 0, n = chars.size();
5
6        while(i < n){
7            char curr = chars[i];
8            int count = 0;
9
10            while(i < n && chars[i] == curr){
11                count++;
12                i++;
13            }
14
15            chars[idx++] = curr;
16
17            if(count > 1){
18                string cnt = to_string(count);
19                for(char c: cnt){
20                    chars[idx++] = c;
21                }
22            }
23        }
24        
25        return idx;
26    }
27};