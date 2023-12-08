#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;



void solve() {
    ll m[9][9];

    for(ll i = 0; i < 9; i++)
        for(ll j = 0; j < 9; j++)
            cin >> m[i][j];

    for(ll i = 0; i < 9; i++){
        bool t[9] = {0};
        for(ll j = 0; j < 9; j++){
            if(t[m[i][j]-1]){
                cout << "No"; return;
            } else t[m[i][j]-1] = 1;
        }
    }
    for(ll i = 0; i < 9; i++){
        bool t[9] = {0};
        for(ll j = 0; j < 9; j++){
            if(t[m[j][i]-1]){
                cout << "No"; return;
            } else t[m[j][i]-1] = 1;
        }
    }
    for(ll i = 0; i < 9; i+=3){
        for(ll j = 0; j < 9; j+=3){
            bool t[9] = {0};
            for(ll r = 0; r < 3; r++){
                for(ll c = 0; c < 3; c++){
                    if(t[m[r+i][c+j]-1]){
                        cout << "No"; return;
                    } else t[m[r+i][c+j]-1] = 1;
                }
            }
        }
    }
    cout << "Yes";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}