#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    for(int i=0; i<n/2+1; i++){
        for(int j=0; j<n-2; j+=2){
            if(s[j]>s[j+2]){
    //cout << s << " i="<< i << " j=" << j << endl;
                char temp = s[j];
                s[j] = s[j+2];
                s[j+2] = temp;
            }
        }
    }

    cout << s;
}