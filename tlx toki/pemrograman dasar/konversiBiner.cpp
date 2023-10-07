#include <bits/stdc++.h>
using namespace std;

string kb(int n){
    if(n == 1){
        return "1";
    }else if(n % 2 == 0){
        return kb(n/2) + "0";
    }else{
        return kb(n/2) + "1";
    }
}

int main(){
    int n; cin >> n;
    cout << kb(n);
}