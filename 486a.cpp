#include<iostream>
using namespace std;

int main(void) {
    long long n;
    cin >> n;

    long long ans;

    (n & 1)? ans = (n-1)/2 -n : ans = n/2;

    cout << ans << endl;

    return 0;
}