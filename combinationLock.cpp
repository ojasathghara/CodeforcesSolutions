#include<bits/stdc++.h>

using namespace std;

int solve(int d, string num1, string num2) {
    int res = 0;

    for (int i=0; i<d; i++) {
        int d1 = (int)(num1[i] - '0');
        int d2 = (int)(num2[i] - '0');

        int m, n;

        if (d1 > d2) {
            m = d1;
            n = d2;
        } else {
            m = d2;
            n = d1;
        }

        if (n != 0) {
            ((n+10)%m == 0)? res += abs(m-n): res += min(abs(m-n), (n+10) % m);
        } else {
            res += min(abs(m-n), (n+10) % m);
        }
    }

    return res;
}

int main(void) {
    int d;
    string num1, num2;
    cin >> d >> num1 >> num2;

    int res = solve(d, num1, num2);
    cout << res;

    return 0;
}