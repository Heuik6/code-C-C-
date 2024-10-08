#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int y, x;
        cin >> y >> x;
        switch (y) {
            case 1:
                s.insert(x);
                break;
            case 2:
                if (s.count(x) != 0) {
                    s.erase(x);
                }
                break;
            case 3:
                if (s.count(x) != 0) {
                    cout << "Yes" << endl;
                } else {
                    cout << "No" << endl;
                }
        }
    }
    return 0;
}



