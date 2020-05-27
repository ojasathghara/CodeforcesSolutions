#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

using namespace std;


int main(void) {
do_not_sync
//  FIO
    int m, n;   cin >> m >> n;
    int a[m][n];    for (int i=0; i<m; i++) for (int j=0; j<n; j++) cin >> a[i][j];

    for (int i=m-2; i>=1; i--) {
        for (int j=n-2; j>=1; j--) {
            if (a[i][j] == 0) {
                a[i][j] = min(a[i+1][j], a[i][j+1]) -1;
            }
        }
    }
    
    int sum = 0;
    for (int i=1; i<m; i++) {
        for (int j=1; j<n; j++) {
            if (a[i][j] <= a[i-1][j] || a[i][j] <= a[i][j-1]) {
                cout << -1 << endl;
                return 0;
            }

            sum += a[i][j];
        }
    }

    for (int i=0; i<m; i++) sum += a[i][0];
    for (int j=1; j<n; j++) sum += a[0][j];

    cout << sum << endl;

    return 0;
}
