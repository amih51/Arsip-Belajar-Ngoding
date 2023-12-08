#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;

int T;

void solve(){
    int n; cin >> n;
    vector<pair<int, int>> arr(n);
    vector<ll> res(n);
    // unordered_map<ll, ll> map;
    for(int i = 0; i < n; i++) {
        int tem; cin >> tem;
        arr[i].first = tem;
        arr[i].second = i;
        // map[tem] = i;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i < n; i++) {
        res[arr[i].second] = n - i;
    }
    for(int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << "\n";
}



int main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> T;
    while(T--){
    // cout << "=====================" << '\n';
        solve();
    }
}