#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m; cin >> n >> m;
    if(m%n != 0){
        cout << -1;
        return 0;
    }
    int d = m/n;
    if(d == 0){
        cout << 0;
        return 0;
    }
    int count = 0;
    while(d%3 == 0){
        count++;
        d /= 3;
    }
    while(d%2 == 0){
        count++;
        d /= 2;
    }
    if(d == 1){
        cout << count;
    }else{
        cout << -1;
    }
}