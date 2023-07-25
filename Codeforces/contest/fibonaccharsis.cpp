#include <bits/stdc++.h>
using namespace std;

bool isFibo(int x, int y, int z){
    for (int i = 0; i < z-2; i++){
        // cout << x << " " << y << endl;
        int temp = y;
        y = x - y;
        x = temp;
        if(y<0 || y>x){
            return false;
        }
    }
    // cout << "berhs" << endl;
    return true;
}

int main(){
    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        int hasil = 0;
        for (int j = 1; j <= n; j++){
            if(isFibo(n, j, k)){
                hasil++;
            }
        }
        cout << hasil << endl;
    }
}