#include <bits/stdc++.h>
using namespace std;

int a, b, k, x; 

int kf(int k, int x){
    if(k == 0){
        return x;
    }else{
        return abs(a*kf(k-1, x) + b);
    }
}

int main(){
    cin >> a >> b >> k >> x;
    cout << kf(k, x);
}