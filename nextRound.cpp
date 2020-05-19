#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n, int k) {
    int count = 0;

    for(int i=0; i<n; i++)  if (a[i] >= a[k-1] && a[i] > 0)  count++;

    return count;
}

int main(void) {
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i=0; i<n; i++)  cin >> a[i];

    int res = solve(a, n, k);
    cout << res;

    return 0;
}