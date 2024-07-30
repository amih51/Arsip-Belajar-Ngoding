#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    string S;
    cin >> N >> K >> S;
    sort(S.begin(), S.end());
    int ans = 0;
    do {
        bool ok = true;
        for (int i = 0; i <= N - K; i++) {
            bool pal = true;
            for (int j = 0; j < K; j++) {
                pal &= S[i + j] == S[i + K - 1 - j];
            }
            ok &= !pal;
        }
        ans += ok;
    } while (next_permutation(S.begin(), S.end()));
    cout << ans;
}