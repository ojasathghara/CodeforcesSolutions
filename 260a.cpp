#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define w(t) int t; cin >> t; while (t--)

using namespace std;


int main(void) {
do_not_sync
// FIO
    long long a, b, n;    cin >> a >> b >> n;
    a *= 10;    n--;

    for (int i=0; i<10; i++) {
        if ((a + i) % b == 0) {
            cout << a+i;
            for (int i=0; i<n; i++) cout << 0;
            cout << endl;
            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
