#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sureSolutions = 0;
    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        cin >> petya >> vasya >> tonya;

        // Jika setidaknya dua dari tiga teman yakin tentang solusi, tambahkan ke sureSolutions.
        if ((petya + vasya + tonya) >= 2) {
            sureSolutions++;
        }
    }

    cout << sureSolutions << endl;

    return 0;
}
