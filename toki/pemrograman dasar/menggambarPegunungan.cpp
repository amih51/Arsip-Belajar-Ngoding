#include <bits/stdc++.h>
using namespace std;

void pg(int n){
    if(n == 1){
        cout << "*\n";
    }else{
        pg(n - 1);
        for(int i = 0; i < n; i++){
            cout << "*";
        }
        cout << "\n";
        pg(n - 1);
    }
}

int main(){
    int n; cin >> n;
    pg(n);
}