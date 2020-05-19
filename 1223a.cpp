#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int q;
    cin >> q;

    while (q --) {
        long n, res;
        cin >> n;

        if (n == 2) res = n;

        else if (n % 2 == 0) res = 0;
        else res = 1;

        cout << res << endl;
    }

    return 0;
}