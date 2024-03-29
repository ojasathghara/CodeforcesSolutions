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

int solve(int a[], int n) {
    unordered_map<int, int> freq;
    repi(0, n)  freq[a[i]]++;

    int count = 0;
    for (auto& p: freq) {
        if (p.first <= p.second) {
            count += (p.second/p.first);
        }
    }

    return count;
}

int main(void) {
do_not_sync
FIO
    int t;  cin >> t;
    while (t --) {
        int n;  cin >> n;

        int a[n];   repi(0, n)  cin >> a[i];

        cout << solve(a, n) << endl;
    }

    return 0;
}
