#include <iostream>
using namespace std;
int main() {
    int a[10], n;
    int s = 0;
    cout << "Nhap gia tri cua n :";
    cin >> n;
    cout << "Nhap cac phan tu i:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        s += a[i];
    }
    cout << "Tong n so cua mang a la " << s;

    return (0);
}