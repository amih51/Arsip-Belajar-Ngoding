#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    if(s.length() <= 1){
        return true;
    }else if(s[0] != s[s.length() - 1]){
        return false;
    }else{
        return palindrome(s.substr(1, s.length() - 2));
    }
}

int main(){
    string s; cin >> s;
    if(palindrome(s)){
        cout << "YA";
    }else{
        cout << "BUKAN";
    }
}