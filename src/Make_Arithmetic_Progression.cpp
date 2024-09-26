#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, y, z, diff_1, diff_2;
    cin >> t;
    while (t--){
        cin >> x >> y >> z;
        diff_1 = y - x;
        diff_2 = z - y;
        if (diff_1 == diff_2){
            cout << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
    }
}
