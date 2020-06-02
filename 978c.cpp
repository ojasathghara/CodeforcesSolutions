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

int bin_search(unsigned long long a[], int n, unsigned long long k) {
    int l = 0, r = n-1;
    int ans = INT_MAX;

    while (l <= r) {
        int m = l + (r-l)/2;

        if (a[m] >= k) {
            ans = m;
            r = m-1;
        }

        else l = m + 1;
    }
    return ans;
}

int main(void) {
do_not_sync
// FIO

    int d, l;   cin >> d >> l;
    unsigned long long r[d], ls[l];   
    repi(0, d)  cin >> r[i];
    repi(0, l)  cin >> ls[i];

    unsigned long long suff[d];  suff[0] = r[0];
    repi(1, d)  suff[i] = r[i] + suff[i-1];

    repi(0, l) {
        unsigned long long tf = ls[i];
        int pos = bin_search(suff, d, tf);

        cout << pos+1 << " " << (r[pos]-suff[pos]) + tf << endl;
    }

    return 0;
}
