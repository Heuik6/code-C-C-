#include <bits/stdc++.h>
using namespace std;
int n, cnt = 0;
int a[100], x[100];
int pos = 0;
vector <vector<int>> v;
void backtrack(int i) {
	for (int j = 1; j <= n; j++) {
		if (x[i - 1] < a[j] && j > pos) {
			x[i] = a[j];
			pos = j;
			cnt++;
			if (cnt >= 2 && i <= n) {
				vector<int> temp;
				for (int i = 1; i <= cnt; i++) {
					temp.push_back(x[i]);
				}
				v.push_back(temp);
				//cout << endl;
				backtrack(i + 1);
			} else backtrack(i + 1);
			cnt--;
			pos = 0;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	backtrack(1);
	sort(v.begin(), v.end());
	for (auto x : v) {
		for (auto y : x) {
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}