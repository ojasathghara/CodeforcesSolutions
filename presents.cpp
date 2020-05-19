#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& v, int n) {
    vector<int> a(n+1);

    for (int i=1; i<n+1; i++) {
        a[v[i]] = i;
    }

    return a;
}

int main(void) {
    int n;
    cin >> n;

    vector<int> v(n+1);

    for (int i=1; i<n+1; i++) {
        cin >> v[i];
    }

    vector<int> a = solve(v, n);

    for (int i=1; i<n+1; i++) {
        cout << a[i] << " ";
    }

    return 0;
}