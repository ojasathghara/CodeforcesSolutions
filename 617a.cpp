#include<iostream>
using namespace std;

int main(void) {
    int x;
    cin >> x;

    int res =0;
    for (int i=5; i>0; i--) {
        int taken = x / i;
        x = x % i;

        res += taken;
    }

    cout << res << endl;
    return 0;
}