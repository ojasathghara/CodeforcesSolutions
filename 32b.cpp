#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
// #define w(t) int t; cin >> t; while (t--)

using namespace std;


int main(void) {
do_not_sync
// FIO
    string s;   cin >> s;
    for (unsigned int i=0; i<s.length(); i++) {
        if (s[i] == '.')    cout << 0;
        else {
            if (s[i+1] == '.')  cout << 1;
            else cout << 2;
            i ++;
        }
    }

    cout << endl;

    return 0;
}
