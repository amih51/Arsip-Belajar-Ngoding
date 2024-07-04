#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;

    size_t found = s.find('_');
    if(found != string::npos){
        while(found != string::npos){
            s[found + 1] = toupper(s[found + 1]);
            s.erase(found,1);
            found = s.find('_');
        }
    }else{
        for(int i = 0; i < s.length(); i++){
            if(isupper(s[i])){
                s[i] = tolower(s[i]);
                s.insert(i,"_");
                i++;
            }
        }
    }

    cout << s;
}