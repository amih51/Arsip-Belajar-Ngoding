#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c; cin >> a >> b >> c;
        int x = abs(a - b);
        int res = x/2;
        if(x%2 != 0){
            res++;
        }
        if(res%c==0){
            cout << res/c << endl;
        }else{
            cout << res/c + 1 << endl;
        }
    }
}