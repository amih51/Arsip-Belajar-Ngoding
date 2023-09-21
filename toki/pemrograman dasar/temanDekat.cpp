#include <bits/stdc++.h>
using namespace std;

void td(){
    int n, d; cin >> n >> d;
    vector<pair<int, int>> teman(n);
    int mi = INT_MAX, ma = INT_MIN;

    for(int i = 0; i < n; i++) cin >> teman[i].first >> teman[i].second;

    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int t = pow(abs(teman[i].first - teman[j].first), d) + pow(abs(teman[i].second - teman[j].second), d);
            mi = min(mi, t);
            ma = max(ma, t);
        }
    }
    printf("%d %d\n", mi, ma);
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    td();
}