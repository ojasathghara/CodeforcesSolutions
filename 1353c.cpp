#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(void) {
do_not_sync
    
    // freopen("iutput.txt", "w"nput.txt", "r", stdin);
    // freopen("o, stdout);

    int t;  cin>>t;
    while (t --) {
        unsigned long long n; cin >> n;
        unsigned long long ans = n;
        ans *= (n-1);
        ans *= (n+1);
        ans /= 3;

        cout << ans << endl;
    }

    return 0;
}
