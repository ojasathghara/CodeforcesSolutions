#include<bits/stdc++.h>
using namespace std;

int main(void) {
	string s1, s2;
	cin >> s1 >> s2;
	

	reverse(s2.begin(), s2.end());

	(s1 == s2)? cout << "YES":cout <<  "NO";

	return 0;
}
