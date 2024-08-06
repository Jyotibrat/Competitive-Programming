#include <iostream>
using namespace std;

int main() {
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if ((y-x) == 2)
        {
            cout << "yes" << endl;
        }
        else if (((x-y) == 1) || ((y-x) == 1)){
            cout << "yes" << endl;
        }
        else if(x==y){
            cout<< "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}
