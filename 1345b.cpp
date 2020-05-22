#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

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
    
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int dp[10001]; dp[0] = 0;
    repi(1, 10001) dp[i] = (3*i*i + i)/2;

    repi(0, 10) cout << dp[i] << " ";
    cout << endl;
    
    int t;  cin >> t;
    while (t --) {
        int n;  cin >> n;

        int ans = 0;
        while (n > 1) {
            int ix = ub(dp, dp+10000, n) - dp;
            ix --;
            // cout << ix << " ";
            n -= dp[ix];
            ans ++;
        }

        cout << ans << endl;
    }

    return 0;
}
