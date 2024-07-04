#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "Segitiga IV\n\nMasukkan nilai n : ";
    cin >> n;
    cout << "\n";

    for(int i = 0; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << "j";
        }
        cout << "i" << endl;
    }
}