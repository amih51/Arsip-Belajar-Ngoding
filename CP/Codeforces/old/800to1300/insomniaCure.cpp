#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    set<int> arr;
    for (int i = 1; i <= d; i++){
        if(k*i > d){
            break;
        }
        arr.insert(k * i);
    }
    for (int i = 1; i <= d; i++){
        if(l*i > d){
            break;
        }
        arr.insert(l * i);
    }
    for (int i = 1; i <= d; i++){
        if(m*i > d){
            break;
        }
        arr.insert(m * i);
    }
    for (int i = 1; i <= d; i++){
        if(n*i > d){
            break;
        }
        arr.insert(n * i);
    }
    cout << arr.size();
}