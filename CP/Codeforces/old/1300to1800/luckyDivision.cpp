#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    bool lucky = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '4' && s[i] != '7'){
            lucky = 0;
            break;
        }
    }
    if(lucky == 0){
        int in = stoi(s);
        int c[] = {4, 7, 44, 47, 74, 77, 444, 447, 477};
        for(int i = 0; i < 9; i++){
            if(in%c[i] == 0){
                lucky = 1;
                break;
            }
        }
    }
    if(lucky == 0){
        cout << "NO";
        return 0;
    }
    cout << "YES";
}