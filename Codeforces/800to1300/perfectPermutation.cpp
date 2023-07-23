#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a = 0, b = -1;

    if (n%2==1){
        cout << "-1";
    } else{
        for (int i = 1; i <= n; i++){
            if (i%2!=0){
                a += 2;
                cout << a;
            } else{
                b += 2;
                cout << b;
            }
            if (i>0 && i<n){
                cout << " ";
            }
        }
    }
}