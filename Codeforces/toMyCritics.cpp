#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b[n], c[n];
    for (int i = 0; i < n; i++){
        // int temp;
        // temp.clear();
        cin >> a[n] >> b[n] >> c[n];
        if(a[n] + b[n] >9 || a[n]+c[n] > 9|| b[n]+c[n]>9){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
}