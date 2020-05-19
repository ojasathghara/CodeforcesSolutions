#include<iostream>
#include<string>
using namespace std;

int main(void) {
    int n;
    cin >> n;

    string res = "";

    for (int i=1; i<=n; i++) {
        if (i % 2)  res += "I hate ";
        else res += "I love ";

        if (i != n) res += "that ";
    }
    res += "it";
    cout << res << endl;

    return 0; 
} 