#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> a) {
	int res = 0;
	int n = a.size();

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	for (int i=0; i<n; i++) {
		int fsum = 0, lsum = 0, count = 0;
		
		for (int j=0; j<=i; j++) {
			fsum += a[j];
			count ++;
		}

		for (int j=i+1; j<n; j++) {
			lsum += a[j];
		}

		if (fsum > lsum) {
			res = count;
			break;
		}
	}

	return res;
}

int main(void) {
	int n;
	cin >> n;

	vector<int> a(n);
	for (auto&i : a) {
		cin >> i;
	}

	int res = solve(a);
	cout << res;

	return 0;
}
