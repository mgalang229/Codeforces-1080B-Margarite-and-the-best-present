#include <bits/stdc++.h>

using namespace std;

long long F(int x) {
	// based on the pattern:
	// let 'x' = position
	// even position = 'x' / 2
	// odd position = sum at previous position(even) - 'x'
	if (x % 2 == 0) {
		return x / 2;
	} else {
		return -x + F(x - 1);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int l, r;
		cin >> l >> r;
		// calculate the difference between the sum at point 'r' and at point 'l - 1'
		cout << F(r) - F(l - 1) << '\n';
	}
	return 0;
}
