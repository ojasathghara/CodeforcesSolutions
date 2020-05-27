#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

using namespace std;


int main(void) {
do_not_sync
// FIO
    int a, b, c, p, q, r;
    cin >> a >> b >> c;
    cin >> p >> q >> r;

    float d = sqrt(pow(p-a, 2) + pow(q-b, 2) + pow(r-c, 2));

    if (d <= sqrt(2))   cout << "YES" << endl;
    else    cout << "NO" << endl;

    return 0;
}
