#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    vector<int> vec(m);
    vector<pair<int, int>> visit(m);

    for(int i = 0; i < n; i++){
        cin >> visit[i].first >> visit[i].second;
        for(int j = visit[i].first-1; j < visit[i].second; j++) vec[j]++;
    }

    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = visit[i].first - 1; j < visit[i].second; j++)total += vec[j] - 1;
        cout << total << endl;
    }
}