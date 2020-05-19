#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;

    int mini = min(n, 3);
    int a[mini];

    for (int i=0; i<mini; i++) {

        cin >> a[i];
        if ((a[i] & 1) == 0) {
            cout << 1 << endl << i+1 << endl;
            return;
        }
        else sum += a[i];
    }

    if ((sum & 1) != 0) {
        cout << -1 << endl;
        return;
    }

    else {
        cout << 1 << endl << 1 << " " << 2 << endl;
    }
}

int main(void) {
  
    int t;
    cin >> t;
    while (t --) {
        solve();
    }

    return 0;
}
