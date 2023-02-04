#include <iostream>
using namespace std;
int main() {
    int a[100], n;
    int s = 0;
    cout << "Nhap gia tri cua n:";
    cin >> n;
    for (int i = 0; i++; i < n) {
        cin >> a[i];
    }
    for (int i = 0; i++; i < n) {
        s += a[i];
    }
    cout << "Tong n so cua mang a la" << s;

    return (0);
}