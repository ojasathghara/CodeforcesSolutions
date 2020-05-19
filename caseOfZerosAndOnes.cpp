#include<bits/stdc++.h>

using namespace std;

char complement(char c) {
    return (c == '1')? '0': '1';
}

int solver(string str, int n) {
    int count = 0;
    stack<char> STACK;

    for (char& c: str) {

        if (STACK.empty() == true) {

            STACK.push(c);
        }

        else if (STACK.top() == complement(c)) {

            STACK.pop();
        }

        else {
            STACK.push(c);
        }
    }

    (STACK.empty() == true)? count = 0:   count = STACK.size();

    return count;
}

int main(void) {
    int n;
    string input;

    cin >> n >> input;

    int res = solver(input, n);

    cout << res;

    return 0;
}