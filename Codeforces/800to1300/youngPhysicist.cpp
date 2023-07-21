#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    int x=0, y=0, z=0;
    for(int i = 0; i < n; i++){
        // cin >> a[i] >> b[i] >> c[i];
        cin >> a[i] >> b[i] >> c[i];
        x += a[i];
        y += b[i];
        z += c[i];
    }
    float hasil = sqrt(x * x + y * y + z * z);
    if(hasil==0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}