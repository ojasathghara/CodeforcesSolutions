#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

#define pb push_back
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define gcd(a,b) __gcd((a), (b))
#define repi(s,e) for(int i=(s); i<(e); i++)
#define repd(s,e) for(int i=(s); i>=(e); i--)
#define PA(a, s, e) repi((s),(e)) cout << a[i] << " "; cout << endl;
#define PAr(a, s, e) repd((s), (e)) cout << a[i] << " "; cout << endl;
#define PV(s, e) for(auto i=(s); i < (e); i++) cout << *i << " "; cout << endl;
#define PVr(s, e) for(auto i=(s)-1; i >= (e); i--) cout << *i << " "; cout << endl;

#define mod 1000000007
#define pii pair<int, int>
#define mii map<int, int>
using namespace std;


int main(void) {
do_not_sync
// FIO
    int t;  cin >> t;
    while (t--) {
        long n, m;   cin >> n  >> m;

        if (n <= 1) {
            cout << 0 << endl;
            continue;
        }

        if (n == 2) {
            cout << m << endl;
            continue;
        }

        cout << m*2 << endl;
    }

    return 0;
}
