#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> v;
    int size; cin >> size;
    for (int i = 0; i < size; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int noq;
    cin >> noq;
    for (int i = 0; i < noq; i++) {
        int a; cin >> a;
        int x = 0;
        int temp = 0;
        int start = 0;
        int end = size;
        // 1 1 2 2 6 9 9 15
        while (end > start) {
        	int middle = (end + start) / 2;
        	if (*(v.begin() + middle) == a) {
        		cout << "Yes ";
        		cout << middle << endl;
        		temp = 1;
        		break;
			} else if (*(v.begin() + middle) > a) {
				end = middle;
			} else {
				start = middle + 1;
			}	
		}
        if (temp == 0) {
        	cout << "No ";
        	for (int i = 0; i < size; i++) {
        		if (*(v.begin()+i) > a) {
        			cout << i + 1 << endl;
        			break;
				}
			}
		}
	}
    return 0;
}
