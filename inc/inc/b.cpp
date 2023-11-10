#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int p[100];

    for (int i = 0; i < n; i++) cin >> p[i];

    if(k >= n) {
        cout << n; return 0;
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        vector<int> vec(n-1);
        int idx = 0, mm = m;
        while(i+idx < n){
            vec[idx] = p[i+idx];
            if(vec.size() < k) continue;
            sort(vec.begin(), vec.end());
            bool lolos = true;
            for(int ii = 0; ii < vec.size() - k; ii++){
                mm -= vec[ii];
                if(mm < 0) lolos = false;
            }
            if(lolos)
                ans = max(ans, idx);
        }
    }

    cout << min(ans, 7);
}
