#include <bits/stdc++.h>
using namespace std;

bool solution(string a, string b){
    int lena = a.length();
    int lenb = b.length();
    if(lena != lenb + 1)return false;

    for(int i = 0; i < lena; i++){
        if(a[i] != b[i]){
            a.erase(i, 1);
            if(a == b){
                return true;
            }else return false;
        }
    }
    return false;
}

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string a, b; cin >> a >> b;

    if(solution(a, b)){
        cout << "Tentu saja bisa!\n";
    }else{
        cout << "Wah, tidak bisa :(\n";
    }
}