#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int take[n+1];
    for (int i=1; i<=n; i++) {
        int t;
        cin >> t;
        take[t] = i;
    }

    for (int i=1; i<=n; i++)    cout << take[i] << " ";
    cout << endl;

    return 0;
}