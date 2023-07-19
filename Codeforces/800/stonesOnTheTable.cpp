#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int hasil = 0;
    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            hasil++;
        }
    }    
    cout << hasil;
}