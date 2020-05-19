#include<bits/stdc++.h>
using namespace std;

int main(void ) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int nf = 0, zf = 0;
    for (char& c: s) {
        if (c == 'n')   nf ++;
        if (c == 'z')   zf ++;
    }

    string res;

    for (int i=0; i<nf; i++)    res += "1 ";
    for (int i=0; i<zf; i++)    res += "0 ";

    cout << res << endl;
    return 0;
}
