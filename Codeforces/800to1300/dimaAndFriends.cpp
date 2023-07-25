#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    long long total = 0;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        total += a;
    }
    int result = 0;
    for(int i=1;i<=5;i++){
        if((total + i) % (n+1) != 1){
            result++;
        }
    }
    cout << result;
}