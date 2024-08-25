#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        string n, s;
        cin >> n >> s;
        bool Good = false;

        if (s[0] != s[s.size() - 1]) {
            Good = true;
        }

        if (Good) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}