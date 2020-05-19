#include<iostream>
using namespace std;

int main(void) {
    int a, b;
    cin >> a >> b;

    int maxi = max(a, b);
    int mini = min(a, b);

    cout << mini << " " << (maxi-mini)/2 << endl;

    return 0;
}