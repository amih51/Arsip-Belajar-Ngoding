#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e4;

int n;
ll v1[N];
ll v2[N];

int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> v1[i];
    for(int i = 0; i < n; i++) cin >> v2[i];
    sort(v1, v1 + n);
    sort(v2, v2 + n, greater<int>());

    ll ans = 0;
    for(int i = 0; i < n; i++) ans += v1[i] * v2[i];

    cout << ans;
}