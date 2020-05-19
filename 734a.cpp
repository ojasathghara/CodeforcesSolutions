#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    
    int a=0, d=0;
    string s;
    cin >> s;

    for (char& c: s) {
        (c == 'A')? a++ : d ++;
    }

    (a > d)? cout << "Anton" : ((a == d)? cout << "Friendship": cout << "Danik");
    cout << endl;

    return 0;    
}