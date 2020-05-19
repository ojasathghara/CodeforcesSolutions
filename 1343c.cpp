#include<bits/stdc++.h>
using namespace std;

bool sgn(long i) {
    if (i > 0)  return 1;
    else return -1;
}

int main(void) {
    long t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int& i: a) cin >> i;

        long long sum = 0;
        for (int i=0; i<n; i++) {
            int cur = a[i];
            int j = i;
            while (j < n && sgn(a[j]) == sgn(a[i])) {
                cur = max(cur, a[j]);
                ++ j;
            }

            sum += cur;
            i = j-1;
        }
        cout << sum << endl;
    }

    return 0;
}