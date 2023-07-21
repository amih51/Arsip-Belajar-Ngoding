#include <iostream>
//#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;

    int upper = 0;
    int lower = 0;
    for(char c:s){
        if(isupper(c)){
            upper++;
        }else{
            lower++;
        }
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(),::toupper);
    }else{
        for(char &c : s){
            c = tolower(c);
        }
    }
    cout << s;
}