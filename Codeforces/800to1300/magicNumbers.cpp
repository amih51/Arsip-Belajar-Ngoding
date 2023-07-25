#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='4' && s[i]!='1'){
            cout << "NO";
            return 0;
        }else if(i>1 && s[i-2]=='4' && s[i-1]=='4' && s[i]=='4'){
            cout << "NO";
            return 0;
        }else if(s[0]=='4'){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}