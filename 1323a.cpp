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
    
    int t;
    cin >> t;

    while (t --) {
        int n;
        cin >> n;

        int a[n];
        repi(0, n)  cin >> a[i];

        int sum = 0, pose = -1, pos1 = -1, pos2 = -1;
        repi(0, n) {
            if ((a[i] & 1) == 0)    {
                pose = i+1;
                break;
            }
            else {
                sum += a[i];
                if (pos1 == -1) pos1 = i+1;
                else pos2 = i+1;
            }

            if ((sum & 1) == 0) break;
        }

        if (pose != -1) cout << 1 << endl << pose << endl;
        
        else {
            if (pos1 != -1 && pos2 != -1)   cout << 2 << endl << pos1 << " " << pos2 << endl;

            else    cout << -1 << endl;
        }
    }

    return 0;
}
