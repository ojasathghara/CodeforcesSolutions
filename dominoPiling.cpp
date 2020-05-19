#include<bits/stdc++.h>
using namespace std;

int solve(int m, int n){
    int res, hm = m/2, hn = n/2;
    
    if (m == 0 || n == 0)   return 0;

    if (m == 1 && n == 1)   return 0;

    (m%2 == 0)? res = n * hm: res = n * hm + hn;

    return res;
}

int main(void) {
    int m, n;
    cin >> m >> n;

    int res = solve(m ,n);
    cout << res;

    return 0;
}