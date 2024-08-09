#include <iostream>
using namespace std;
void print_sudoku(int a[9][9]);
int main() {
	int a[9][9];
	cout << "Nhap sudoku:" << "\n";
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
		}
	}
	print_sudoku(a);
}
void print_sudoku(int a[9][9]) {
	for (int i = 0; i < 9; i = i++) {
		if (i % 3 == 0 && i != 0) {
			cout << "------------------";
		}
		for (int j = 0; j < 9; j++) {
			if (j % 3 == 0 && j != 0) {
				cout <<"|";
			}
			cout << a[j][j] << " ";
		}
	}
}