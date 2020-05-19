#include"bits/stdc++.h"
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
    
    int n;
    cin >> n;

    if (n <= 2) {
        cout << 1 << endl;
        return 0;
    }

    int a = 1, b = 1, c = 0;

    while (n > 2) {
        c = a+b;
        a = b;
        b = c;
        n --;
    }

    cout << c << endl;

    return 0;
}
