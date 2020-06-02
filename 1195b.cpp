#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define w(t) int t; cin >> t; while (t--)

using namespace std;

long long sum(int n) {
    long long f;

    (n & 1)? f = (n + 1)/2: f = n / 2;
    
    return n * f;
}

long long solve(long long n, long long k) {
    if (n == 0 || n == 1) return 0;
    long long l = -1, r = n + 1;

    while (r -l > 1) {
        long long m = (r + l) / 2;
        
        if (sum(n-m) -m > k)    l = m;

        else r = m;
    }

    return r;
}

int main(void) {
do_not_sync
// FIO

    long long n, k;  cin >> n >> k;
    cout << solve(n, k) << endl;

    return 0;
}
