#include<bits/stdc++.h>

using namespace std;

bool checkDistinct(int n) {
    bool visited[10];
    memset(visited, false, 10);

    while (n) {
        int r = n % 10;

        if (visited[r] == true) {
            return false;
        }

        visited[r] = true;
        n /= 10;
    }

    return true;
}

int solve(int y) {

    for (int i=y+1; i<10000; i++) {
        if (checkDistinct(i)) {
            return i;
        }
    }

    return 0;
}

int main(void) {
    int y;
    cin >> y;

    cout << solve(y);

    return 0;
}