#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	string s;
	cin >> n >> s;
	s = 'x' + s + 'x';
	int ans = 0;
	rep(i,n) {
		if (s.substr(i,3) == "xxx") ans++;
	}
	cout << ans << endl;
}
