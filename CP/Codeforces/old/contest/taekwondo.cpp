#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ypos = 0;
    int xpos = 0;
    int yneg = 0;
    int xneg = 0;
    vector<float> arr;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if (x == 0) {
            if (y > 0) ypos = 1;
            if (y < 0) yneg = 1;
        } else if (y == 0) {
            if (x > 0) xpos = 1;
            if (x < 0) xneg = 1;
        } else {
            float m = static_cast<float>(y) / x; // Konversi ke float
            auto it = find(arr.begin(), arr.end(), m);
            if (it == arr.end()) {
                arr.push_back(m);
            }
        }
    }

    cout << arr.size() + ypos + yneg + xpos + xneg;
    return 0;
}
