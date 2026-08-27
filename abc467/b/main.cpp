#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n, reg = 0, k = 0;
	cin >> n;
	rep(i,n) {
		int a, b;
		string s;
		cin >> a >> b >> s;
		if (s == "keep") reg += b;
		else reg += a;
		k += a;
	}
	cout << reg - k << endl;
}
