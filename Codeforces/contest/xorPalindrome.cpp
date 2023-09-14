#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int T;

void solve(){
    int n; cin >> n;
    string s; cin >> s;
    int diff = 0;
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-1-i]) diff++;
    }
    vector<int> res(n + 1,0);
    if(n & 1) {
        for(int i = diff; i < (n+1)/2; i++){
            res[i] = 1;
            res[n - i] = 1;
        }
    }else{
        for(int i = diff; i < n/2; i++){
            res[i] = 1;
            res[n - i] = 1;
        }
    }
    for (int i = 0; i < n + 1; i++) {
    cout << res[i];
    }
    cout << "\n";

}



int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> T;
    while(T--){
        solve();
    }
}