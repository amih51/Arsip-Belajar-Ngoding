#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main(){
    string s;
    cin >> s;

    unordered_set<char> unik;
    for(char c:s){
        unik.insert(c);
    }

    if(unik.size()%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}