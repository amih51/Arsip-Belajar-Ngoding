#include <bits/stdc++.h>
using namespace std;

int pro(int n, int m, string a, string b) {
    int ans = 0;
    while (a.size() < m) {
        if (a[ans % n] == b[ans % m]) {
            ans++;
        } else {
            ans = -1;
            break;
        }
    }
    return ans;
}

void solve() {
    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int result = pro(n, m, a, b);
    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        solve();
    }
}
