#include <iostream>
using namespace std;

int main(){
    long long a;
    cin>>a;

    string s = to_string(a);
    int n = s.size();

    int f = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '4' || s[i] == '7'){
            f++;
        }
    }
    if(f==4 || f==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}