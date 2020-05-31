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
#define w(t) int t; cin >> t; while (t--)

#define mod 1000000007
#define pii pair<int, int>
#define mii map<int, int>
using namespace std;

int main(void) {
do_not_sync
// FIO 
    int n;  cin >> n;
    int a[n];   repi(0, n)  cin >> a[i];

    int k = 0;
    for (k=1; k<n; k++) {
        if (a[k-1] > a[k])  break;
    }

    if (k == n) {
        cout << "yes" << endl << 1 << " " << 1 << endl;
        return 0;
    }

    int b[n];   repi(0, n)  b[i] = a[i];

    sort(b, b+n);
    int pos1 = -1, pos2 = -1;

    repi(0, n) {
        if (a[i] != b[i]) {
            if (pos1 == -1) pos1 = i;
            else pos2 = i; 
        }
    }

    reverse(a+pos1, a+pos2+1);

    for (int i=1; i<n; i++) {
        if (a[i-1] > a[i]) {
            cout << "no" << endl;
            return 0;
        }
    }

    cout << "yes" << endl << pos1+1 << " " << pos2+1 << endl;

    return 0;
}
