#include<iostream>
using namespace std;

long solve(long a, long b) {
    long res = 0;
    if (a % b == 0) return res;

    long r = a % b;
    res =  b - r;

    return res;
}

int main(void) {
    int t;
    cin >> t;

    while (t --) {
        long a, b;
        cin >> a >> b;

        long res = solve(a, b);
        cout << res << endl;
    }

    return 0;
}