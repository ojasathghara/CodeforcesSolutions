#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int b[], int n) {
	int max=INT_MIN, sum = 0;

	for (int i=0; i<n; i++) {
		sum -= a[i];
		sum += b[i];

		if (sum > max) {
			max = sum;
		}
	}

	return max;
}

int main(void) {
	int n;
	cin >> n;

	int a[n], b[n];

	for (int i=0; i<n; i++) {
		cin >> a[i] >> b[i];
	}

	int res = solve(a, b, n);
	cout << res;

	return 0;
}
