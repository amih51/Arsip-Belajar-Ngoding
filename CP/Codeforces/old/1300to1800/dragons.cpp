#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        if (arr[i].first >= s) {
            cout << "NO";
            return 0;
        }
        s += arr[i].second;
    }

    cout << "YES";
    return 0;
}
