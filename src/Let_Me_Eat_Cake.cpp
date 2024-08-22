#include <bits/stdc++.h>
using namespace std;

int main() {
    int T, A, B, count;
    cin >> T;
    while (T--) {
        count = 0;
        cin >> A >> B;
        
        while (A != B) {
            if (A > B) {
                int ceiling = (A + 1) / 2;  
                count += ceiling;
                A -= ceiling;
            } else {
                int ceiling = (B + 1) / 2;
                count += ceiling;
                B -= ceiling;
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
