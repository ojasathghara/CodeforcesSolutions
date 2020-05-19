#include<iostream>
using namespace std;

int main(void) {

    long n; int k;
    cin >> n >> k;

    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    while (k -- && n != 0) {
        if (n % 10 == 0 && n != 0)    n /= 10;
        else n --;
    }

    cout << n << endl;
}