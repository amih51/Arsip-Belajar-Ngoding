#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int uang = 1000;
    float bunga = .1;
    int tahun = 10;
    cout << "Masukkan tahun : "; //cin >> tahun;

    for(int i=0; i<tahun; i++){
        float hasil1 = uang + uang*bunga;
        //float hasil2 = uang + pow(1+bunga, i);
        cout << hasil1 << " = " << endl;
        uang = hasil1;
    }
}