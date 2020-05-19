#include<iostream>
#include<string>

using namespace std;

void generate(int digit, string prefix="") {
	if (digit == 0) {
		cout << prefix << endl;
	} else {
		generate(digit-1, "4");
		generate(digit-1, prefix+"4");
		generate(digit-1, "7");
		generate(digit-1, prefix+"7");
	}
}

int main(void) {
	int n;
	cin >> n;

	generate(n);

	return 0;
}

