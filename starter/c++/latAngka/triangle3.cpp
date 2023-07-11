#include <iostream>
using namespace std;

int main(){
    
    int n;

    cout << "\nSegitiga III \n\nMasukkan nilai n : ";
    cin >> n;
    cout << endl;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int k = n; k > i; k--){
            cout << "k";
        }
        cout << "k" << endl;
    }
}