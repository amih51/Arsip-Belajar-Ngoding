#include <bits/stdc++.h>
using namespace std;

vector<int> vec;

bool ukuran(int t, int n) {
    int maxT = t;
    while (maxT < n) {
        maxT += t;
    }
    return (n - maxT) - t <= 1;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m; cin >> m;

    for (int i = 0; i < m; i++) {
        int temp; cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());

    int n; cin >> n;

    int amount = m / n;
    for (int i = 1; i < n; i++) {
        cout << (vec[amount * i] + vec[amount * i + 1]) / 2 << " ";
    }
}