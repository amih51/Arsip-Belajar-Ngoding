#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, q;
    cin >> n >> q;
    vector<pair<string, string>> no(n);

    for (int i = 0; i < n; i++) {
        cin >> no[i].first >> no[i].second;
    }

    for (int i = 0; i < q; i++) {
        string tem;
        cin >> tem;
        bool found = 0;
        int l = 0, r = n - 1;

        while (l <= r) { 
            int mid = (l + r) / 2;
            if (tem == no[mid].first) {
                cout << no[mid].second << "\n";
                found = 1;
                break;
            } else if (tem < no[mid].first) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (!found) {
            cout << "NIHIL\n";
        }
    }
}
