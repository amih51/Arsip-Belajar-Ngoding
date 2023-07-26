#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    unsigned long long count = 0;
    for(int i = 0; i <= a; i++){
        for(int j = 0; j <= b; j++){
            if(i*i + j == a && j*j + i == b)count++;
        }
    }
    cout << count;
}