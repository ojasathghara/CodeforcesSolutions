#include"bits/stdc++.h"
#define do_not_sync ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define FIO freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

using namespace std;


int main(void) {
do_not_sync
// FIO
    std::cout.precision(6);
    std::cout.setf(std::ios::fixed);

    int n; 
    float b, sum = 0;   
    cin >> n >> b;
    
    float a[n];   for (int i=0; i<n; i++) {
        cin >> a[i];
        sum += (float)a[i];
    }

    float total = (float)sum + b;
    float each = (float)total/(float)n;

    // cout << total << " " << each << endl;

    float o[n];
    for (int i=0; i<n; i++) {
        
        if (a[i] > each) {
            cout << -1 << endl;
            return 0;
        }
        
        o[i] = each - (float)a[i];
    }

    for (int i=0; i<n; i++) cout << o[i] << endl;
    
    return 0;
}
