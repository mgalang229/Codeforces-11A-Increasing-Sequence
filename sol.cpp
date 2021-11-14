#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	cin >> n >> d;
	vector<long long> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	long long cnt = 0;
	for (int i = 1; i < n; i++) {
		if (a[i] <= a[i - 1]) {
			// check if current number is less than or equal to the previous number
			// calculate their difference and find the quotient of this difference and 'd'
			// to get the total number of moves needed in order to make the current number
			// equal to the previous number
			// to make it strictly greater, then simply add 1 to number of moves 
			// (to ensure that the sequence is increasing as well)
			long long diff = a[i - 1] - a[i];
			long long moves = diff / d;
			moves++;
			a[i] += (d * moves);
			cnt += moves;
		}
	}
	cout << cnt << '\n';
	return 0;
}
