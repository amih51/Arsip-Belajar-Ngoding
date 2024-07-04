#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x; cin >> n >> x;
    unordered_map<int, float> hash;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < n; j++){
            float temp; cin >> temp;
            hash[j] += temp;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%.1f\n", hash[i]/x);
    }
}