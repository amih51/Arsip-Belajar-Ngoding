#include<bits/stdc++.h>
using namespace std;

int main(){
    double n; 
    cin >> n;
    long int c = trunc(n);
    if(n == c){
        cout << c << " " << c;
    }else if(n > 0){
        cout << c << " " << c + 1;
    }else{
        cout << c - 1 << " " << c;
    }
}