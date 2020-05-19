#include<bits/stdc++.h>
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define pb push_back
#define eb emplace_back
#define gcd(a,b) __gcd((a), (b))
#define repi(s,e) for(int i=(s); i<(e); i++)
#define repd(s,e) for(int i=(s); i>=(e); i--)
#define PA(a, s, e) repi((s),(e)) cout << a[i] << " "; cout << endl;
#define PAr(a, s, e) repd((s), (e)) cout << a[i] << " "; cout << endl;
#define PV(s, e) for(auto i=(s); i < (e); i++) cout << *i << " "; cout << endl;
#define PVr(s, e) for(auto i=(s)-1; i >= (e); i--) cout << *i << " "; cout << endl;

using namespace std;


int main(void) {
do_not_sync
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    long n;  cin >> n;
    long p[n];
    repi(0, n)  cin >> p[i];
    sort(p, p+n);

    long q;  cin >> q;

    long res[q] = {0}, resi = 0;
    repi(0, q) {
        int t;  cin >> t;
        res[resi++] = upper_bound(p, p+n, t) - p;
    }

    repi(0, q)  cout << res[i] << endl;

    return 0;
}
