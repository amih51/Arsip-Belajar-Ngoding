#include <iostream>
using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;

    int harga=0;
    for(int i=1; i<=w; i++){
        harga += k*i;
    }

    int pinjam;
    if(harga>=n){
        pinjam = harga - n;

    }else{
        pinjam = 0;
    }

    cout << pinjam;
}