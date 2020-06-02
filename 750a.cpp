#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define w(t) int t; cin >> t; while (t--)

using namespace std;

int ap_sum(int n) {
    int res = n * (10 + (n-1) * 5);
    return res / 2;
}

int main(void) {
do_not_sync
// FIO
    int n, k;   cin >> n >> k;
    int rem = 240 - k;
    int ans = 0;

    int l = 1, r = n;
    while (l <= r) {
        int m = l + (r-l)/2;
        
        if (ap_sum(m) <= rem) {
            ans = m;
            l = m + 1;
        }
        else r = m - 1;
    }

    cout << ans << endl;

    return 0;
}

// 5 10 15 20 25 30 35 40 45 50