#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int n = s.length();
    if(n == 1){
        cout << "satuan";
    }else if(n == 2){
        cout << "puluhan";
    }else if(n == 3){
        cout << "ratusan";
    }else if(n == 4){
        cout << "ribuan";
    }else if(n == 5){
        cout << "puluhribuan";
    }
}