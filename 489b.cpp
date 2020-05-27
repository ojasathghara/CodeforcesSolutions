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

int memo[102][102];

int pairs(int a[], int b[], int m, int n) {

    if (m == -1 || n == -1) return 0;

    if (m == 0) {
        int ans = abs(a[m] - b[n]);
        if (ans <= 1)   return 1;
        else return memo[m][n] = pairs(a, b, m, n-1);
    }

    if (n == 0) {
        int ans = abs(a[m] - b[n]);
        if (ans <= 1)   return 1;
        else return memo[m][n] = pairs(a, b, m-1, n);
    }

    if (memo[m][n] != -1)   return memo[m][n];

    if (abs(a[m] - b[n]) <= 1)  return memo[m][n] =  1 + pairs(a, b, m-1, n-1);

    else    return memo[m][n] = max(pairs(a, b , m-1, n), pairs(a, b, m, n-1));
}

int main(void) {
do_not_sync
// FIO
    memset(memo, -1, sizeof(memo));

    int m;  cin >> m;
    int a[m];   repi(0, m)  cin >> a[i];

    int n;  cin >> n;
    int b[n];   repi(0, n)  cin >> b[i];
    
    sort(a, a+m);   sort(b, b+n);

    cout << pairs(a, b, m-1, n-1) << endl;
    return 0;
}

//notes: another approach: two pointers.
