#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0), cin.tie(0);
    int n; cin >> n;

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        int angka[4];
        for(int j = 0; j < 4; j++){
            int temp = s[j] - '0';
            if(temp == 0) angka[j] = 10;
            else angka[j] = temp;
        }
        int cur = 1;
        int ans = 0;
        for(int j = 0; j < 4; j++){
            ans += abs(cur - angka[j]) + 1;
            cur = angka[j];
        }
        cout << ans << endl;
    }
}