#include <bits/stdc++.h>
using namespace std;

const int N = 1e4;
int sepatu[N];
int bebek[N];

int main(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> bebek[i];
    for(int i = 0; i < m; i++) cin >> sepatu[i];
    sort(bebek, bebek + n);
    sort(sepatu, sepatu + m);

    int ans = 0, l = 0, r = 0;
    while(l < n && r < m){
        if(bebek[l] == sepatu[r] || bebek[l] + 1 == sepatu[r]) {
            ans++; l++; r++;
        } else if (bebek[l] < sepatu[r]) {
            l++;
        } else r++;
    }
    cout << ans << endl;
}