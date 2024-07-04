#include <bits/stdc++.h>
using namespace std;

int faktorialgg(int n){
    if(n == 1){
        return n;
    }else if(n % 2 == 0){
        return n / 2 * faktorialgg(n-1);
    }else{
        return n * faktorialgg(n-1);
    }
}

int main(){
    int n; cin >> n;
    cout << faktorialgg(n);
}