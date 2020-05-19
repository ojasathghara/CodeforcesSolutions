#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    string p[n];
    for (int i=0; i<n; i++) cin >> p[i];

    int count = 1;
    for (int i=1; i<n; i++) {
        (p[i] != p[i-1])? count ++: count = count;
    }
    cout << count << endl;
    return 0;
}