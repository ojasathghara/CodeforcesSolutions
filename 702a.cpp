#include<bits/stdc++.h>
using namespace std;

int solve(long a[], int n) {
    vector<long> dp(n, 1);

    for (int i=1; i<n; i++) {
        if (a[i] > a[i-1]) {
            dp[i] = dp[i-1] + 1;
        }
    }

    return *max_element(dp.begin(), dp.end());
}

int main(void) {
    int n;
    cin >> n;

    long a[n];
    for (int i=0; i<n; i++) cin >> a[i];

    cout << solve(a, n) << endl;

    return 0;
}