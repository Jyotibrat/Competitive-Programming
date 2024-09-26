#include<iostream>
#include<vector>

using namespace std;

void solve(){
    int N;
    cin >> N;
    
    vector<vector<int>> a(N + 1);
    
    for(int i = 0; i < N - 1; i++){
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    
    int lc = 0;
    for(int i = 1; i <= N; i++){
        if (a[i].size() == 1){
            lc++;
        }
    }
    int ic = N - lc;
    int beauty = lc * 3 + ic * 2;
    cout << beauty << endl;
}

int main(){
    int T;
    cin >> T;
    while (T--){
        solve();
    }
    return 0;
}
