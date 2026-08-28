#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	char x;
	cin >> n >> x;
	bool have = false;
	rep(i,n) {
		string s;
		cin >> s;
		if (s[x - 'A'] == 'o') have = true;
	}
	if (have) cout << "Yes" << endl;
	else cout << "No" << endl;
}
