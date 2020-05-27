#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

using namespace std;

long solve(long n) {
    if (n == 0) return 0;
    long dp[n+1];
    dp[0] = 0;

    for (long i=1; i<=n; i++) {
        long temp = i;
        dp[i] = INT_MAX;
        while (temp != 0) {
            long d = temp % 10;
            temp /= 10;

            if (d == 0) continue;

            long temp_ans = dp[i-d] + 1;
            dp[i] = min(dp[i], temp_ans);
        }
    }

    return dp[n];
}

int main(void) {
do_not_sync
// FIO
    long n;  cin >> n;
    cout << solve(n) << endl;

    return 0;
}
