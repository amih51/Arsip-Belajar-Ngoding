#include <bits/stdc++.h>
using namespace std;
const int mx = 1e6;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, e, q, r;
        cin >> n >> e >> q >> r;
        
        int x[e + 1], y[e + 1], p[q], dl, mtx[n + 1][n + 1];
        memset(mtx, 0, sizeof(mtx));
        for (int i = 1; i <= e; i++) {
            cin >> x[i] >> y[i];
        }
        
        for (int i = 0; i < q; i++) cin >> p[i];
        
        for (int i = 0; i < r; i++) {
            cin >> dl;
            x[dl] = 0;
            y[dl] = 0;
        }
        
        for (int i = 1; i <= e; i++) {
            mtx[x[i]][y[i]] = 1;
            mtx[y[i]][x[i]] = 1;
        }
        
        int res = 0;
        for (int i = 0; i < q - 1; i++) {
            for (int j = i + 1; j < q; j++) {
                if (!mtx[p[i]][p[j]]) {
                    res += 1;
                }
            }
        }
        
        cout << res << endl;
    }
}