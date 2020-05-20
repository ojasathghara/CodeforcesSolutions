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
    
    int n, k;   cin >> n >> k;
    int a[n];   repi(0, n)  cin >> a[i];

    if (n == k) {
        cout << 1 << endl;
        return 0;
    }
    if (k == 1) {
        int ix = min_element(a, a+n) - a;
        cout << ix + 1 << endl; 
        return 0;
    }

    int mini = INT_MIN, ix = 0, sum = 0;
    repi(0, k)  sum += a[i];
    mini = sum;

    repi(1, n-k+2)  {
        sum -= a[i-1];
        sum += a[i+k-1];

        if (sum < mini) {
            mini = sum;
            ix = i;
        }
    }

    cout << ix+1 << endl;

    return 0;
}
