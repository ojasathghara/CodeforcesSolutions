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

using namespace std;


int main(void) {
do_not_sync
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n, l;   cin >> n >> l;
    int a[n];   repi(0, n)  cin >> a[i];

    int dp[n]; unordered_set<int> st;
    dp[n-1] = 1;
    st.insert(a[n-1]);

    repd(n-2, 0) {
        if (st.find(a[i]) == st.end())  {
            dp[i] = dp[i+1] + 1;
            st.insert(a[i]);
        }
        else    dp[i] = dp[i+1];

    }

    repi(0, l) {
        int t;  cin >> t;
        cout << dp[t-1] << endl;
    }

    return 0;
}
