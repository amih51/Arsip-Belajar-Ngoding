#include <iostream>
using namespace std;

int main() {
    string p;
    cin >> p;

    bool willOutput = false;
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9') {
            willOutput = true;
            break;
        }
    }

    if (willOutput) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
