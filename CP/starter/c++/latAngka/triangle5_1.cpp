#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "\nSegitiga V\n\nMasukkan nilai n : ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "k";
        }
        for(int l = 1; l < i; l++){
            cout << "l";
        }
         
        cout << endl;
    }
}