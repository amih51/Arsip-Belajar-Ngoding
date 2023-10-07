#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i++){
        int tem; cin >> tem;
        res += tem;
    }
    cout << res;
}