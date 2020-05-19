#include<iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    int t;

    for (int i=0; i<n; i++) {
        cin >> t;
        if (t == 1) {
            cout << "hard" << endl;
            return 0;
        }
    }

    cout << "easy" << endl;
    return 0;
}