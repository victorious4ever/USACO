#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	freopen("herding.in", "r", stdin);
	freopen("herding.out", "w", stdout);

	// all cow locations
	vector<int> a;
	for (int i = 0; i < 3; i++) {
		int b;
		cin >> b;
		a.push_back(b);
	}
	sort(a.begin(), a.end());

	/*
	 * The minimum number of moves can only be 0, 1, or 2.
	 * 0 is if they're already consecutive,
	 * 1 is if there's a difference of 2 between any 2 numbers,
	 * and 2 is for all other cases.
	 */
	if (a[0] == a[2] - 2) {
		cout << 0 << endl;
	} else if ((a[1] == a[2] - 2) || (a[0] == a[1] - 2)) {
		cout << 1 << endl;
	} else {
		cout << 2 << endl;
	}
	// max is equal to largest difference between end and middle, minus one.
	cout << max(a[2] - a[1], a[1] - a[0]) - 1;
}
