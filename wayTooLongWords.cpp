#include<bits/stdc++.h>
using namespace std;

string solve(string word) {
    string res;
    int n = word.length();

    if (n <= 10) return word;

    res = word.substr(0,1) + to_string(n-2) + word.substr(n-1, 1);

    return res;
}

int main(void) {
    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        string res = solve(word);
        cout << res << endl;
    }
    
    return 0;
}