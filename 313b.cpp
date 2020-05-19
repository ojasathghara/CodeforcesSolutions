// don't know how this logic works
#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define pb push_back
#define eb emplace_back
#define gcd(a,b) __gcd((a), (b))
#define ub upper_bound
#define lb lower_bound
#define repi(s,e) for(int i=(s); i<(e); i++)
#define repd(s,e) for(int i=(s); i>=(e); i--)
#define PA(a, s, e) repi((s),(e)) cout << a[i] << " "; cout << endl;
#define PAr(a, s, e) repd((s), (e)) cout << a[i] << " "; cout << endl;
#define PV(s, e) for(auto i=(s); i < (e); i++) cout << *i << " "; cout << endl;
#define PVr(s, e) for(auto i=(s)-1; i >= (e); i--) cout << *i << " "; cout << endl;

using namespace std;


int main(void) {
do_not_sync
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string s;   cin >> s;
    int n = s.length();
    
    int dp[100005] = {0}, cnt = 0;
    repi(1, n) {
        if (s[i] == s[i-1]) ++cnt;

        dp[i] = cnt;
    }

    int q;  cin >> q;
    repi(0, q) {
        int l, r;   cin >> l >> r;
        cout << dp[r-1] - dp[l-1] << endl;
    }

    return 0;
}
