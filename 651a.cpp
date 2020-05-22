#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int memo[102][102];

int getMinutes(int a, int b) {
    if (a == 0 || b == 0)   return 1;
    if (a == 1 && b == 1)   return 0;
    if (a <= 2 && b <= 2)   return 1;

    if (memo[a][b] != -1)   return memo[a][b];
    if (memo[b][a] != -1)   return memo[b][a];

    if (a > b)  return memo[a][b] = 1 + getMinutes(a-2, b+1);
    else return memo[a][b] = 1 + getMinutes(a+1, b-2);
}

int main(void) {
do_not_sync
    
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
    memset(memo, -1, sizeof(memo));

    int a, b;   cin >> a >> b;
    cout << getMinutes(a, b) << endl;

    return 0;
}
