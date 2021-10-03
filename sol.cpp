#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		--l; // we need to decrement the value of 'l' in order to find the sum between 'l' and 'r'
		// view the image in this repository for the derivation of formula
		// if we perform the operation in every i-th number, then we can see that for every number
		// the sum at that point will be ('i' + 1) / 2 (if it's even) and ('i' + 1) / 2 * -1 (if it's odd
		// to get the sum between the interval of 'l' and 'r' (inclusive), then calculate their difference:
		// = sum at point 'r' - sum at point 'l - 1'
		long long left = (l % 2 == 0 ? (l + 1) / 2 : (l + 1) / 2 * (-1));
		long long right = (r % 2 == 0 ? (r + 1) / 2 : (r + 1) / 2 * (-1));
		cout << right - left << '\n';
	}
	return 0;
}
