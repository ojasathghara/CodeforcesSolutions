#include<bits/stdc++.h>
using namespace std;

string solve(string s) {
    int n = s.length();
    if (n == 0) return "NO";

    string res;
    string h = "hello";

    int i=0, j=0;
    while (i < n && j < 5) {
        if (s[i] == h[j]) {
            j ++;
        }
        i ++;
    }

    if (j == 5) return "YES";
    else return "NO";

    return res;
}

int main(void) {
    string s;
    cin >> s;

    string res = solve(s);
    cout << res;

    return 0;
}