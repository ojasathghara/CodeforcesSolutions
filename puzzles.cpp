#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& diff, int m, int n) {
    if (n == 0) {
        return 0;
    }

    int minimum = INT32_MAX;
    std::sort(diff.begin(), diff.end());

    for (int i=0; i<=m-n; i++) {
        minimum = std::min(minimum, diff[i+n-1] - diff[i]);
    }

    return minimum;
}

int main(void) {
    int n, m;       // n students; m puzzles.
    cin >> n >> m;

    vector<int> diff(m);    //difficulty of ith puzzle;
    for (auto& i: diff) {
        cin >> i;
    }

    int res = solve(diff, m, n);
    cout << res << endl;

    return 0;
}