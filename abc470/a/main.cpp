#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	cin >> n;
	vector<int> c(n);
	vector<int> cnt(n+1);
	rep(i,n) cin >> c[i];
	rep(i,n) {
		cnt[c[i]]++;
	}
	int ma = 0;
	rep(i,n+1) {
		ma = max(ma,cnt[i]);
	}
	int ans = 0;
	rep(i,n) {
		if (c[i] != ma) ans++;
	}
	cout << ans << endl;
}
