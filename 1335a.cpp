#include<iostream>
using namespace std;

int main(void) {
    int t;
    cin >> t;

    while (t --) {
        long n;
        cin >> n;

        if (n == 0 || n == 1) {
            cout << 0 << endl;
            continue;
        }

        cout << (n - 1)/2 << endl;
    }

    return 0;
}