#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int X, Y;
        cin >> X >> Y;

        if (X >= 2 * Y || Y >= 2 * X) {
            cout << 0 << endl;
            continue;
        }

        int operationsToIncreaseX = 0;
        int operationsToDecreaseY = 0;

        operationsToIncreaseX = max(0, 2 * Y - X);
        operationsToDecreaseY = max(0, Y - (X / 2));

        int operationsToIncreaseY = 0;
        int operationsToDecreaseX = 0;

        operationsToIncreaseY = max(0, 2 * X - Y);
        operationsToDecreaseX = max(0, X - (Y / 2));

        int minOperations = min({operationsToIncreaseX, operationsToDecreaseY, operationsToIncreaseY, operationsToDecreaseX});

        cout << minOperations << endl;
    }

    return 0;
}
