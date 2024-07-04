#include <iostream>
using namespace std;

int pangkatIterasi(int a, int b){
    int hasil = a;
    for(int i = 1; i < b; i++){
        //cout << hasil << endl;
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b){
    if (b==1){
        return a;
    } else {
    return a * pangkatRekursif(a,(b-1));
    }
}

int main(){

    cout << "\nPangkat Iterasi dan Rekursif\n\n";

    int x, y, metode;
    cout << "Masukkan angka: ";
    cin >> x;    
    cout << "Masukkan pangkat: ";
    cin >> y;    

    cout << "\n1. Pangkat Iterasi\n2. Pangkat Rekursif\n\nPilih Metode di atas: ";
    cin >> metode;
    switch (metode)
    {
    case 1:
        cout << "Menggunakan Pangkat Iterasi\nHasilnya: ";
        cout << pangkatIterasi(x,y);
        break;
    case 2:
        cout << "Menggunakan Pangkat Rekursif\nHasilnya: ";
        cout << pangkatRekursif(x,y);
        break;
    default:
        break;
    }

    //cout << pangkatRekursif(x,y);

    return 0;
}