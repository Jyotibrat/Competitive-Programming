#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int x, y, z, left;
    cin >> x >> y >> z;
    double team_1 = x*1 + y*0.5;
    double team_2 = y*0.5 + z*1;
    if ((x+y+z) == 4){
        if (team_1 > team_2){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    else{
        left = 4 - (x+y+z);
        team_1 += left;
        if (team_1 > team_2){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
    return 0;
}
