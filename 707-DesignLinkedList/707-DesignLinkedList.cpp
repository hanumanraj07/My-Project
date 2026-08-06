// Last updated: 8/6/2026, 3:26:31 PM
1class Solution {
2public:
3    string countAndSay(int n) {
4        string res = "1";
5        for (int i = 1; i < n; i++) {
6            string temp = "";
7            int count = 1;
8            for (int j = 1; j < res.size(); j++) {
9                if (res[j] == res[j - 1]) {
10                    count++;
11                } else {
12                    temp += to_string(count) + res[j - 1];
13                    count = 1;
14                }
15            }
16            temp += to_string(count) + res.back();
17            res = temp;
18        }
19        return res;
20    }
21};