#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

struct item {
    ull price;
    int number;
};

int n;
ull m;
item plate[10];

bool compA(item a, item b) {
    if (a.price == b.price) return a.number > b.number;
    return a.price < b.price;
}

bool compB(item a, item b) {
    return a.number < b.number;
}

void ans(ull a, bool repeat = false) {
    ull rep[100];
    for (int j = 0; j < a; j++) {
        for (int i = n; i >= 0; i--) {
            if (m >= plate[i].price) {
                m -= plate[i].price;
                if (j < 50) cout << plate[i].number;
                if (repeat) rep[j] = plate[i].number;
                break;
            }
        }
    }
    cout << endl;
    if (repeat) {
        if (a > 50) {
            for (ull i = a - 50; i < a; i++) cout << rep[i];
        } else {
            for (int i = 0; i < a; i++) cout << rep[i];
        }
    }
}

void solve() {
    sort(plate, plate + n + 1, compA);
    if (m < plate[0].price) {
        cout << 0;
        return;
    }
    ull cheapest = plate[0].price;
    if ((plate[0].number == 0 ? plate[1].price : plate[0].price) > m || n == 0) {
        cout << "1\n0\n0";
        return;
    }
    ull len = (m - (plate[0].number == 0 ? plate[1].price : plate[0].price)) / plate[0].price + 1;
    cout << len << '\n';
    sort(plate, plate + n + 1, compB);
    m -= len * cheapest;
    for (int i = n; i >= 0; i--) plate[i].price -= cheapest;
    if (len < 100) {
        ans(len, true);
    } else {
        ans(50);
        ull l = 0, r = len - 100;
        for (int i = n; i >= 0 && m > 0 && l < r; i--) {
            if (plate[i].price == 0) break;
            ull buy = m / plate[i].price;
            if (l + buy > r) buy = r - l;
            l += buy;
            buy *= plate[i].price;
            m -= (m > buy) ? buy : m;
        }
        ans(50);
    }
}

int main() {
    cin >> n;
    for (int i = 0; i <= n; i++) {
        cin >> plate[i].price;
        plate[i].number = i;
    }
    cin >> m;
    solve();
}
