#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    string idx1, idx2;
    unordered_map<string, int> hash;
    for(int i=0; i<n; i++){
        string s; cin >> s;
        hash[s]++;
        if(i>0 && s!=idx1){
            idx2 = s;
        }else{
            idx1 = s;
        }
    }
    if(hash[idx1]>hash[idx2]){
        cout << idx1;
    }else{
        cout << idx2;
    }
}