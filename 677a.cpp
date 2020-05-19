#include<iostream>
using namespace std;

int main(void) {
    int n, h, res = 0;
    cin >> n >> h;

    for (int i=0; i<n; i++) {
        int t;
        cin >> t;

        (t > h)? res += 2: res += 1;
    }
    cout << res << endl;
    return 0;
}