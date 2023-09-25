#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b){
    int tem = 1;
    int i = 2;
    while(a > 1 || b > 1){
        while(a % i == 0 && b % i == 0){
            tem *= i;
            a /= i; b /= i;
        }
        while(a % i == 0){
            tem *= i;
            a /= i;
        }
        while(b % i == 0){
            tem *= i;
            b /= i;
        }
        i++;
    }
    return tem;
}

int main(){
    int n; cin >> n;
    int res = 1;
    for(int i = 0; i < n; i++){
        int tem; cin >> tem;
        res = lcm(res, tem);
    }
    cout << res;
}