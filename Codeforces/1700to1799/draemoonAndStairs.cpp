#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n; cin >> m;
    
    if(n<m){
        cout << "-1";
        return 0;
    }

    int mi;
    if(n%2==0){
        mi = n/2;
    }else{
        mi = n/2 + 1;
    }

    int res = -1;
    for(int i = mi; i <= n; i++){
        if(i%m == 0){
            res = i;
            break;
        }
    }
    cout << res;
}