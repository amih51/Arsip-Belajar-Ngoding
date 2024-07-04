#include <iostream>

using namespace std;

int main(){

    int n;

    cout << "\nSegitiga V\n\nMasukkan nilai n : ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << "_";
        }
        for(int k = 0; k < 2*i-1; k++){
            cout << "k";
        }
        
        cout << endl;
    }
}