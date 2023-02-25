#include <iostream>
using namespace std;
int main() {
    int a[10], n;
    int max = 0;
    cout << "Nhap so phan tu cua mang, n = ";
    cin >> n;
    cout << "Nhap cac phan tu trong mang ";
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    max = a[1];
    for (int i = 2; i < n; i++) {
      if (a[i] > max) {
        max = a[i];
      }
    }
    cout << "Phan tu co gia tri lon nhat la " << max;
  return 0;
}

