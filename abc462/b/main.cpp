#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
	int n;
	cin >> n;
	vector<vector<int>> B(n);
	rep(i,n) {
		int k;
		cin >> k;
		int b;
		rep(j,k) {
			cin >> b;
			B[b-1].push_back(i+1);
		}
	}
	rep(i,n) {
		cout << B[i].size();
		for (int j : B[i]) cout << " " << j;
		cout << endl;
	}
}
