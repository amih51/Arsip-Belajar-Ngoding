#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    if(n > 9 || n < 0){
        cout << "Invalid or distorted";
        return 0;
    }
    for(int i = 0; i <= n; i++){
        for(int j = 0; j < n - i; j++){
            cout << "  ";
            }
        for(int j = 0; j < i + 1; j++){
            cout << j;
                if(i != 0){
                    cout << " ";
                    }
            }
        for(int j = i - 1; j >= 0; j--){
            cout << j;
            if(j != 0){
                cout << " ";
            }
            }
        cout << endl;
        }
     for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < n - i; j++){
            cout << "  ";
            }
        for(int j = 0; j < i + 1; j++){
            cout << j;
                if(i != 0){
                    cout << " ";
                    }
            }
        for(int j = i - 1; j >= 0; j--){
            cout << j;
            if(j != 0){
                cout << " ";
            }
            }
        if(i != 0){
            cout << endl;
            }
        }
}