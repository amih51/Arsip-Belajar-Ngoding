#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int result = INT_MIN;
    for (int i = 0; i < n; i++){
        int f, t; cin >> f >> t;
        int ans;

        (t>k) ? ans = f - t + k : ans = f;
        if(ans>result) {
            result = ans;
        }
    }
    cout << result;
}
