#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int uang = 1000;
    float bunga = .1;
    int tahun = 10;
    cout << "\n Perhhitungan Bunga\n\nMasukkan tahun : "; cin >> tahun;
    cout << "\nMasukkan uang : "; cin >> uang;
    cout << "\nMasukkan bunga : "; cin >> bunga;

    for(int i=1; i<=tahun; i++){
        float hasil1 = uang + uang*bunga;
        //float hasil2 = uang + pow(1+bunga, i);
        cout << i << ". " << hasil1 << endl;
        uang = hasil1;
    }
}