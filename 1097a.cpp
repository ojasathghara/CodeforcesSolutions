#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string tc;
    cin >> tc;

    for (int i=0; i<5; i++) {
        string s;
        cin >> s;

        if (s[0] == tc[0] || s[1] == tc[1]) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}