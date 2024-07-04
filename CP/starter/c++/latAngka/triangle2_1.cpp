#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan nilai n : ";
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int a = 1; a < n-i; a++){
            cout << "&";
        }
        
        cout << "&" << endl;
    }
}