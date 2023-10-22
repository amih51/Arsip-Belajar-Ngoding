#include <bits/stdc++.h>
using namespace std;
const int nax = 1e5 + 5;

int arr[nax];
int n;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        arr[i + 1] = arr[i] + temp;
    }

    int q; cin >> q;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;

        int l = 1, r = n, ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (x <= arr[mid]) {
                ans = mid;
                r = mid - 1;
            } else l = mid + 1;
        }

        cout << ans << '\n';
    }
}
