#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    int li[501];
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> li[i];
    cin >> x;

    int dp[50001];
    dp[0] = 0;

    for(int i = 1; i <= x; i++){
        dp[i] = 50000;
        for(int j = 0; j < n; j++){
            if(i >= li[j])
                dp[i] = min(dp[i], dp[i - li[j]] + 1);
        }
    }

    if(dp[x] != 50000)
        cout << dp[x];
    else
        cout << "-1";
}