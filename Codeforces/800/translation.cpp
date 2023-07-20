#include <iostream>
//#include <string>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int n = s.size();

    int error = 0;
    for(int i = 0; i < n; i++){
        if(s[i]!= t[n-1-i]){
            error++;
        }
    }
    if(error==0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}