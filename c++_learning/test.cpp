#include <iostream>
#include <cmath>

using namespace std;

void sang(int l, int r) {
	int prime[r - l + 1];
	for (int i = 0; i < r - l + 1; i++) {
		prime[i] = 1;
	}
	for (int i = 2; i <= sqrt(r); i++) {
		for (int j = max(i*i, (l + i - 1) / i * i); j <= r; j+=i) {
			prime[j - l] = 0;
		}
	}
	for (int i = max(2, l); i < r; i++) {
		if(prime[i - l]) {
			cout << i << " ";
		}
	}
}

int main() {
	int l, r;
	cin >> l >> r;
	sang(l, r);
	return 0;
}