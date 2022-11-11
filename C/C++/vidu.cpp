#include <iostream>
using namespace std;
int main() {
  int x, y, z;
  cout << "Nhap gia tri cua x: ";
  cin >> x;
  cout << "Nhap gia tri cua y: ";
  cin >> y;
  cout << "Nhap gia tri cua z: ";
  cin >> z;
  int max = x;
  if (max < y) {
    max = y;
  } 
  if (max < z) {
    max = z;
  }
  cout << "gia tri lon nhat la: " << max;
  return 0;
}