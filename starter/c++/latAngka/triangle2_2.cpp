#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukkan nilai n : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int a = n; a > i; a--){
            cout << "&";
        }
        
        cout << "&" << endl;
    }
}