#include<bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 5;
int dp[MAX];

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    vector<int> A(N*M+1, 1e9);
    A[0] = 0;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            int area = i*j;
            for(int k = area; k <= N*M; k++) {
                A[k] = min(A[k], A[k-area] + 2*(i+j) - min(i, j));
            }
        }
    }
    int ans = 1e9;
    for(int i = K; i <= N*M; i++) {
        ans = min(ans, A[i]);
    }
    cout << ans << endl;
    return 0;
}
