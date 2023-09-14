#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int m; cin >> m;
        int maxNum = 10000;
        for(int j = 0; j < m; j++){
            int a,b; cin >> a >> b;
            if(b%2==1){
                b++;
            }
            maxNum = min(maxNum,a + b/2);
        }
        cout << maxNum - 1 << endl;
    }
}