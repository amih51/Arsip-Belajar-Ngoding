#include <bits/stdc++.h>
using namespace std;
const int mx = 200002;

int t, n, e, q, r, res, a;
int x[mx], y[mx], p[mx], cnt[mx];
bool dl[mx];

int fnd(int a) {
    if (p[a] == a) return a;

    p[a] = fnd(p[a]);
    return p[a];
}

void join(int a, int b) {
    int px = fnd(a), py = fnd(b);

    if (px != py) {
        res += cnt[px] * cnt[py];
        cnt[py] += cnt[px];
        p[px] = py;
    }
}

int main() {
    cin >> t;
    
    while (t--) {
        cin >> n >> e >> q >> r;
        
        for (int i = 1; i <= n; i++) {
            p[i] = i; cnt[i] = 0;
        }

        for (int i = 1; i <= e; i++) {
            cin >> x[i] >> y[i];
            dl[i] = false;
        }
        
        for (int i = 0; i < q; i++) {
            cin >> a; cnt[a] = 1;
        }
        
        for (int i = 0; i < r; i++) {
            cin >> a; dl[a] = true;
        }
        
        for (int i = 1; i <= e; i++) {
            if (!dl[i]) join(x[i], y[i]);
        }
        
        res = 0;
        for (int i = 1; i <= e; i++) {
            if (dl[i]) join(x[i], y[i]);
        }
        
        cout << res << endl;
    }
}