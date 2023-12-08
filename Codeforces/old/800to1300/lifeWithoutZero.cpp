#include <bits/stdc++.h>
using namespace std;

int removeZero(int x){
    string a = to_string(x);
    string result;
    for(char c : a){
        if(c != '0'){
            result += c;
        }
    }
    return stoi(result);
}

int main(){
    int n, m; cin >> n >> m;

    int a = removeZero(n);
    int b = removeZero(m);
    int c = removeZero(m+n);

    if(a+b == c){
        cout << "YES";
    }else{
        cout << "NO";
    }
}