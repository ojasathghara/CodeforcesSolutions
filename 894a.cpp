#include<bits/stdc++.h>
using namespace std;

// finding a pattern as subsequence.

// int findSubSeq(string process, string pattern, int m, int n) {
//     if (m == 0 && n == 0)   return 1;
//     if (m == 0) return 0;

//     if (process[m-1] == pattern[n-1])
//         return findSubSeq(process, pattern, m-1, n-1) + findSubSeq(process, pattern, m-1, n);

//     else return findSubSeq(process, pattern, m-1, n);
// }


int findSubSeq(string process, string pattern, int m, int n) {
    int dp[m+1][n+1];

    for (int j=0; j<=n; j++)    dp[0][j] = 0;
    for (int i=0; i<=m; i++)    dp[i][0] = 1;

    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            if (process[i-1] == pattern[j-1])   dp[i][j] = dp[i-1][j-1] + dp[i-1][j];

            else dp[i][j] = dp[i-1][j];
        }
    }

    return dp[m][n];
}

int main(void) {
    string s;
    cin >> s;

    string pattern = "QAQ";
    cout << findSubSeq(s, pattern, s.length(), 3) << endl;

    return 0;
}