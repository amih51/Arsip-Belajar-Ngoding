#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int inMin = 0, inMax = 0;
    int min = arr[0], max = arr[0];

    // Mencari nilai minimum dan maksimum serta indeksnya
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            inMax = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            inMin = i;
        }
    }

    // Sorting
    int hasil = 0;
    for (int i = inMin; i < n - 1; i++) {
        swap(arr[i], arr[i + 1]);
        hasil++;
    }
    for (int i = inMax; i > 0; i--) {
        swap(arr[i], arr[i - 1]);
        hasil++;
    }

    // cout << inMax << endl;
    // cout << inMin << endl;

    cout << hasil << endl;
}
