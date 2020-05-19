#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int d[5] = {1, 5, 10, 20, 100};
    int n;
    cin >> n;

    int res = 0;
    for (int i=4; i>=0 && n > 0; i--) {
        
        // cout << n << endl;

        if (n >= d[i]) {
        
            int k = n / d[i];
            res += k;
            n -= (k*d[i]);

            // cout << d[i] << " " << res << endl;
        }
    }

    cout << res << endl;

    return  0;
}