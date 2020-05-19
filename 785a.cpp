// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces. 

#include<bits/stdc++.h>
using namespace std;

int main(void) {
    unordered_map<string, int> f;
    f["Cube"] = 6;
    f["Icosahedron"] = 20;
    f["Dodecahedron"] =12;
    f["Octahedron"] = 8;
    f["Tetrahedron"] = 4;

    int n;
    cin >> n;

    int sum = 0;
    for (int i=0; i<n; i++) {
        string s;
        cin >> s;

        sum+= f[s];
    }

    cout << sum << endl;
    return 0;
}