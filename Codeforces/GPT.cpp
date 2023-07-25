#include <iostream>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    // Calculate the number of toasts each friend can make
    int toasts_bottles = (k * l) / (n * nl);
    int toasts_limes = c * d / n;
    int toasts_salt = p / (n * np);

    // Find the minimum number of toasts among the three quantities
    int min_toasts = min(toasts_bottles, min(toasts_limes, toasts_salt));

    cout << min_toasts << endl;

    return 0;
}
