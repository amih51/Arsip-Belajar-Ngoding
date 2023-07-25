#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    if(n <= 10 || n > 21){
        cout << 0 << endl;
        return 0;
    }else{
        if(n == 11 || n == 21){
            cout << 4 << endl;
            return 0;
        } else if(n > 11 && n <= 19){
            cout << 4 << endl;
        } else {
            cout << 15 << endl;
        }
    }
}