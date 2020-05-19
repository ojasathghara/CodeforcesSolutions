#include<bits/stdc++.h>
using namespace std;

int solve(int n) {
    return n*n + (n-1)*(n-1);
}

int main(void) {
  int n;
  cin >> n;

  cout << solve(n) << endl;
  return 0;
}
