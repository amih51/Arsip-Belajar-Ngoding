#include <iostream>
using namespace std;

int reverse(int x) {
    int temp = x;
    int ret  = 0;

    while (temp > 0) {
        ret  = (ret * 10) + (temp % 10);
        temp = temp / 10;
    }

    return ret;
}

int main(){
    int n, m; cin >> n >> m;
    int c = reverse(n) + reverse(m);
    cout << reverse(c);
}