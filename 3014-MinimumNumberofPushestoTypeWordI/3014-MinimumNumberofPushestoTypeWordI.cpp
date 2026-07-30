// Last updated: 7/30/2026, 3:58:55 PM
1class Solution {
2public:
3    int differenceOfSums(int n, int m) {
4        int num1 = 0, num2 = 0;
5        for (int i = 1 ; i <= n ; i++) {
6            if (i % m == 0) num2 += i;
7            else num1 += i;
8        }
9        return num1 - num2;
10    }
11};