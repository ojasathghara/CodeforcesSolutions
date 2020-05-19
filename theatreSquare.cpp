#include<bits/stdc++.h>
using namespace std;

long long solve(long long n, long long m, long long a) {
    long long req_m = 0, req_n = 0;

    if (m == 0 || n == 0)   return 0;

    (m % a == 0)? req_m = m/a: req_m = m/a + 1;
    (n % a == 0)? req_n = n/a: req_n = n/a + 1;

    return req_m * req_n;
}

int main(void) {
    long long n, m, a;
    cin >> n >> m >> a;

    long long res = solve(n, m, a);
    cout << res;

    return 0;
}