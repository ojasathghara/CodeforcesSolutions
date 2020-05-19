#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;    
    unordered_map<string, string> names;

    cin >> n >> m;
    for (int i=0; i<n; i++) {
        string name, ip;
        cin >> name >> ip;

        names[ip] = name;
    }

    string res[m];

    for (int i=0; i<m; i++) {
        string comm, ip;
        cin >> comm >> ip;

        ip.pop_back();     // removes ';' from ip.

        res[i] = comm + " " + ip + "; #" + names[ip];  
    }

    for (int i=0; i<m; i++) {
        cout << res[i] << endl;
    }

    return 0;
}