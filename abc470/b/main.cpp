#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	cin >> n;
	vector<int> c(n);
	rep(i,n) cin >> c[i];
	int ans = n;
	// 1からnまでの回数のうち１番少ない回数を答えとして出力
	rep(x,n+1) {
		int cnt = 0;
		rep(i,n) {
			if (c[i] != x) cnt++;
		}
		ans = min(ans,cnt);
	}
	cout << ans << endl;
}
