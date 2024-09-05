#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        multiset<int> array;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            array.insert(x);
        }

        for (int i = 0; i < k; i++) {
            int minimum = *array.begin();
            int maximum = *array.rbegin();

            array.erase(array.begin());
            array.erase(prev(array.end()));

            array.insert(minimum + maximum);
        }

        for (int val : array) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
