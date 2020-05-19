#include<bits/stdc++.h>
    
using namespace std;
    
int solve(vector<int> v) {
    int max = INT32_MIN, n = v.size();
    int count = 1;
    
    for (int i=1; i<n; i++) {
        if (v[i] >= v[i-1]) {
            count ++;
        }
    
        else {
            max = std::max(max, count);
            count = 1;
        }
    }

    max = std::max(max, count);
    
    return max;
}
    
int main(void) {
    int n;
    cin >> n;
    
    vector<int> v(n);
    
    for (auto& i: v) {
        cin >> i;
    }
    
    int res = solve(v);
    cout << res;
    
    return 0;
}