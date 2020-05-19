#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    int max = -1;
    for (int i=0; i<n; i++) {
        int t;
        cin >> t;

        if (sqrt(t) != (int)(sqrt(t)) && t > max)  max = t;
    }

    cout << max << endl;

    return 0;
}