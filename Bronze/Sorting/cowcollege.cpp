#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> tuition(n);
	for (int &t : tuition) { cin >> t; }

	sort(tuition.begin(), tuition.end());

	int best_tuition = 0;
	long long best_money = 0;
	for (int i = 0; i < n; i++) {
		// Apply the formula from the editorial
		long long curr_tuition = (long long)tuition[i] * (n - i);
		if (curr_tuition > best_money) {
			best_tuition = tuition[i];
			best_money = curr_tuition;
		}
	}

	cout << best_money << ' ' << best_tuition << endl;
}
