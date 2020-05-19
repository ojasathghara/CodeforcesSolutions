#include<bits/stdc++.h>

using namespace std;

long solve (long loc) {
    if (loc == 0) {
        return 0;
    } else if (loc % 5 == 0) {
        return loc/5;
    } else {
        return loc/5 + 1;
    }
}

int main(void) {
    long loc;
    cin >> loc;

    long res = solve(loc);

    cout << res;

    return 0;
}