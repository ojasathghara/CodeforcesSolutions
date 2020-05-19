#include<iostream>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a[26] = {0};
    int A[26] = {0};

    for (char& c: s) {
        switch(c) {
            case 'a'...'z': a[c-'a'] ++;    break;
            case 'A'...'Z': A[c-'A'] ++;    break;
        }
    }

    for (int i=0; i<26; i++) {
        if (a[i] == 0 && A[i] == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}