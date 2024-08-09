#include <iostream>

using namespace std;

int main() {
	int rows, columns;
	cout << "Nhap so hang: ";
	cin >> rows;
	cout << "Nhap so cot: ";
	cin >> columns;
	// Tao mang dong 2 chieu
	char **arr = new char *[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new char[columns];
	}
	// Nhap phan tu
	cout << "Nhap cac phan tu cua mang: ";
	for (int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cin >> arr[i][j];
		}
	}
	// Xuat phan tu
	for (int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			cout << "arr[" << i << "][" << j << "]" <<" = " << arr[i][j] << "\n";
		}
	}
	// Kiem tra cac hang
	int testr = 0, checkr = 0, temp1 = 1;
	while (testr < rows) {
		int j = columns - 1;
		for (int k = 1; k < j; k++) {
			if (arr[testr][k] == arr[testr][0]) {
				cout << "Hang thoa man la hang thu: " << testr << "\n";
				temp1 = 2;
			} else {
				checkr = 1;
			}
		}
	testr++;
	}
	if (temp1 == checkr) {
		cout << "Khong co hang nao thoa man" << "\n";
	}
	// Kiem tra cac cot
	int testcol = 0;
	int checkcol = 0;
	int temp2 = 1;
	while (testcol < columns) {
		int i = rows - 1;
		for (int k = 1; k < i; k++) {
			if (arr[k][testcol] == arr[0][testcol]) {
				cout << "Cot thoa man la: " << testcol << "\n";
				temp2 = 2;
			} else {
				checkcol = 1;
			}	
		}
	testcol++;
	}
	if (temp2 == checkcol) {
		cout << "Khong co cot nao thoa man";
	}
	// Xoa bo nho cua mang
	for(int i = 0; i < rows; i++) {
		delete []arr[i];
	}
	delete []arr;
	return 0;
}