#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i = 0; i < t; i++){
        long long n, x, y; cin >> n >> x >> y;
        long long left = 0, right = 0;
        long long big = n, small = 1;
        for(int j = x; j < n; j += x){
            if(j%y != 0){
                left += big;
                big--;
            }
        }
        for(int j = y; j < n; j += y){
            if(j%x != 0){
                right += small;
                small++;
            }
        }
        cout << "================= " << left - right << endl;
    }
}