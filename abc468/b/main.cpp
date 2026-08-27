#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int m, d;
	string s;
	cin >> m >> d >> s;
	int ans = 0;
	rep(x,m) {
		bool ok = true;
		rep(i,m) {
			if (s[i] == 'G' && abs(x-i) <= d) ok = false;
		}
		if (ok) ans++;
	}
	cout << ans << endl;
}