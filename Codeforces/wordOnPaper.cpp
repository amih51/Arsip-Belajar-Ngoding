#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    for (int i = 0; i < n; i++)
    {
        string s;
        s = "";
        for (int j = 0; j < 8; j++){
            string a;
            cin >> a;

            for (char c : a) {
                if (c != '.') {
                    s += c;
                }
            }
        }
        cout << s << endl;
    }

    return 0;
}
