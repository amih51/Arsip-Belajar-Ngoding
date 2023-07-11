#include <iostream>
using namespace std;

int fibonacci(int a, int b, int l){
    int c;

    //cout << "nilai l: " << l ;
    //cout << " nilai c: " << c << endl;

    if(l <= 3){
        //cout << "\nSelesai";
        return a + b;
    } else {
    c = a + b;
    a = b;
    b = c;
    cout << c << " ";
    l--;
    return fibonacci(a,b,l);
    }
}

int main(){

    cout << "\nFibonacci\n\n";

    int x, y, z;
    cout << "Masukkan angka pertama: ";
    cin >> x;  
    cout << "Masukkan angka kedua: ";
    cin >> y;  
    cout << "Seberapa panjang:";
    cin >> z;

    cout << "\nHasilnya adalah \n";
    cout << x << " " << y << " " << fibonacci(x,y,z);

    return 0;
}