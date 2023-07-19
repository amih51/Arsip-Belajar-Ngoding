#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int hasil = 0;
    for(int i=0; i<n; i++){
        bool a, b, c;
        cin >> a >> b >> c;
        if(a&&b&&c==true){
            hasil++;
            //cout << "a";
        }else if(a&&b==true){
            hasil++;
            //cout << "b";
        }else if(a&&c==true){
            hasil++;
            //cout << "c";
        }else if(c&&b==true){
            hasil++;
            //cout << "d";
        }
    }
    cout << hasil;
}