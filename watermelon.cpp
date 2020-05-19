#include<bits/stdc++.h>
using namespace std;

bool solve(int n) {

    if (n == 0) return false;
    
    for (int i=2; i<=n/2; i+=2) {

        if ((n-i)%2 == 0)   return true;
    }
    
    return false;
}

int main(void) {

    int n;
    cin >> n;

    bool res = solve(n);

    res? cout << "YES": cout << "NO";

    return 0;
}