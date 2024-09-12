#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e, f, sum=0;
    cin >> a >> b >> c >> d >> e >> f;
    sum = max(a, b) + max(e, f) + max(c, d);
    cout << sum << endl;
    return 0;
}