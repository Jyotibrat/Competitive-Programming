#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i], b[i] = a[i];
        }
        sort(b.begin(), b.end());
        int mx = -1, mn = *min_element(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if (a[i] != b[i]){
                mx = max(mx, a[i]);
            }
        }
        int res = (mx == -1) ? 0 : mx + mn;
        cout << res << endl;
    }
}
