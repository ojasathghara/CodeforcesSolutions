#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

using namespace std;

int solve(int a[], int n) {

    int count1 = 0;
    for (int i=0; i<n; i++) count1 += a[i];

    for (int i=0; i<n; i++) {
        (a[i] == 0)? a[i] = 1: a[i] = -1;
    }

    int lmax = 0, gmax = INT_MIN;

    for (int i=0; i<n; i++) {

        lmax = max(lmax + a[i], a[i]);        
        gmax = max(gmax, lmax);
    }

    return gmax + count1;
}

int main(void) {
do_not_sync
// FIO
    int n;  cin >> n;
    int a[n];   for (int i=0; i<n; i++) cin >> a[i];

    cout << solve(a, n) << endl;

    return 0;
}
