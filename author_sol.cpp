#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	double l;
	cin >> l;
	double p, q;
	cin >> p >> q;
	// time = (distance / total speed)
	double time = l / (p + q);
	// distance = (speed * time)
	cout << p * time << '\n';
	return 0;
}
