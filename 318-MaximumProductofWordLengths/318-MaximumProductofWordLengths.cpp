// Last updated: 8/13/2026, 3:57:00 PM
1class Solution {
2public:
3    int maxProduct(vector<string>& words) { 
4        int n = words.size();
5        vector<int> mask(n, 0);
6        
7        for(int i=0;i<n;++i) {
8            int w_bin=0;
9            for(int j=0;j<words[i].size();++j) {
10                w_bin |= 1 << (words[i][j]-'a');
11             
12            }
13            mask[i] = w_bin;
14        }
15        
16        int res=0;
17        for(int i=0;i<n-1;i++) {
18            for(int j=i+1;j<n;j++) {
19                if((mask[i]&mask[j])==0) {
20                    int prod = words[i].size()*words[j].size();
21                    res = max(res, prod);
22                }
23            }
24        }
25        
26        return res;
27    }
28};