#include<iostream>
using namespace std;

int main(void) {
    
    int s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    int maxi= 0;
    for (int i=0; i<4; i++) {
        if (s[i] > maxi)    maxi = s[i];
    }

    for (int i=0; i<4; i++) {
            s[i] = maxi - s[i];
    }

    for (int i=0; i<4; i++) {
        if (s[i] != 0) {
            cout << s[i] << " ";
        }
    }
    cout << endl;

    return 0;
}