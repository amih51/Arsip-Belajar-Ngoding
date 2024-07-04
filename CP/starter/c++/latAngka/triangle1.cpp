#include <iostream>

using namespace std;

int main(){
    int n;

    cout << "\nSegitiga I\n\nMasukkan nilai n : ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++){
        for(int a = 0; a < i; a++){
            cout << "#";
        }
        cout << "#" << endl;
    }
}