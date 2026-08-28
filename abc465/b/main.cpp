#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int x, y, l, r, a, b;
	cin >> x >> y >> l >> r >> a >> b;
	int ans = 0;
	for (int t = a; t < b; t++) {
		if (t < l || t >= r) ans += y;
		else ans += x;
	}
	cout << ans << endl;
}
