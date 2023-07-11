#include <iostream>
using namespace std;

int faktorial(int a){
    if (a==1){
        return a;
    } else {
        return a * faktorial(a-1);
    }
}

int main(){

    cout << "\nFaktorial\n\n";

    int x;
    cout << "Masukkan angka: ";
    cin >> x;  

    cout << "\nHasilnya adalah " << faktorial(x);

    return 0;
}