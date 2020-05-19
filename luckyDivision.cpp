#include<iostream>
#include<set>
#include<string>
#include<sstream>
#include<cmath>

using namespace std;

void generate(int digits, set<int>& lucky, string prefix="") {
	if (digits == 0) {
		stringstream prefix_num(prefix);
		int num;
		prefix_num >> num;

		lucky.insert(num);
	} else {
		generate(digits-1, lucky, "4");
		generate(digits-1, lucky, prefix+"4");
		generate(digits-1, lucky, "7");
		generate(digits-1, lucky, prefix+"7");
	}
}

bool solve(int n) {
	bool res = false;
	int digits = log10(n) + 1;
	set<int> lucky;

	generate(digits, lucky);

	for (auto& i: lucky) {
		if (n % i == 0 && i <= n) {
			res = true;
		}
	}

	return res;
}

int main(void) {
	int n;
	cin >> n;

	bool res = solve(n);
	res? cout << "YES": cout << "NO";

	return 0;
}

