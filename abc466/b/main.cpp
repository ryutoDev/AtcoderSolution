#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> S(m+1,-1);
	rep(i,n) {
		int c, s;
		cin >> c >> s;
		if (S[c] < s)  S[c] = s;
	}
	for (int i = 1; i < m+1; ++i) {
		if (i != 1) cout << " ";
		cout << S[i];
	}
	cout << endl;
}
