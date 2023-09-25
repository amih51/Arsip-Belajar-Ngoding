#include <bits/stdc++.h>
using namespace std;

int m[128][128];
int n;
string code[128*128];

void fill(int r, int c, int k){
    for(int i = r; i < r + k; i++){
        for(int j = c; j < c + k; j++){
            m[i][j] = 1;
        }
    }
}

void translate(int r, int c, int k, string s){
    int len = s.length();
    char num = s[0];
    if(len == 0){
        fill(r, c, k);
    }else if(len == 1){
        if(num == '0') fill(r, c, k/2);
        if(num == '1') fill(r, c + k/2, k/2);
        if(num == '2') fill(r + k/2, c, k/2);
        if(num == '3') fill(r + k/2, c + k/2, k/2);
    }else{
        s.erase(s.begin());
        if(num == '0') translate(r, c, k/2, s);
        if(num == '1') translate(r, c + k/2, k/2, s);
        if(num == '2') translate(r + k/2, c, k/2, s);
        if(num == '3') translate(r + k/2, c + k/2, k/2, s);
    }
}


int main(){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> code[i];
    int r, c; cin >> r >> c;

    int pow2 = 1;
    while(pow2 < max(r, c)) pow2 *= 2;

    for(int i = 0; i < pow2; i++){
        for(int j = 0; j < pow2; j++){
            m[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        code[i].erase(code[i].begin());
        translate(0, 0, pow2, code[i]);
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << m[i][j];
            (j == c - 1) ? cout << "\n" : cout << " ";
        }
    }
}