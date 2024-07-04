#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int mm = k * l / nl;
    int slices = c * d;
    int salt = p / np;
// cout << mm << " " << slices << " " << salt << endl;
    int toast = min(mm, min(slices,salt));
    cout << toast/n << endl;
}