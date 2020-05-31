#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define w(t) int t; cin >> t; while (t--)

using namespace std;


int main(void) {
do_not_sync
// FIO
    string s;   cin >> s;
    int u = 0, l = 0;

    for (char& c: s) (c <= 90)? u++ : l++;

    if (l >= u) {
        for (char& c: s)    if (c <= 90) c += 32; 
    }
    else {
        for (char& c: s)    if (c > 90) c -= 32; 
    }

    cout << s << endl;

    return 0;
}
