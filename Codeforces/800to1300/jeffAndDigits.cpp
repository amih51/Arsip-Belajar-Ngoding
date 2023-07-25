#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    unordered_map <int, int> hash;
    hash[0] = 0;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        if(x==5)hash[5]++;
        if(x==0)hash[0]++;
    }
    int t = 5*hash[5];
    int id = 0;
    while(t%9!=0){
        t -= 5;
        id++;
    }
    if(hash[0]==0){
        cout << "-1";
        return 0;
    }
    if(t==0){
        cout << '0';
        return 0;
    }
    for(int i=0; i<hash[5]-id; i++){
        cout << '5';
    }
    for(int i=0; i<hash[0]; i++){
        cout << '0';
    }
}