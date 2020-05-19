#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define gcd(a,b) __gcd((a), (b))
#define repi(a,n) for(int i=(a); i<(n); i++)
#define repd(n,a) for(int i=(n); i>=(a); i--)

using namespace std;


int main(void) {
do_not_sync
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    int n;
    cin >> n;

    if (n < 2 || (n & 1)) {
        cout << 0 << endl;
        return 0;
    }

    cout << (long long)pow(2, n/2) << endl; 
    
    return 0;
}
