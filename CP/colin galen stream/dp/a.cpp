#include <bits/stdc++.h>
using namespace std;

int dp[30];

int main(){
    int n; cin >> n;

    dp[0] = 1;
    for(int i = 1; i <= n/2; i++){
        dp[i] = dp[i-1] * 2;
    }

    (n % 2 == 1) ? cout << 0 : cout << dp[n/2]; 
}