#include <bits/stdc++.h>
using namespace std;
int n,T=0,p=0,q=0;
int main(){
    cin>>n;
    int t[n-1];
    int a[n],b[n];
    for (int i=0;i<n-1;i++){
        cin>>t[i];
    }
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i=0;i<n;i++){
        cin>>b[i];
        p+=a[i];
        q+=b[i];
        if (b[i]>p){
            cout<<-1;
            return 0;
        }
    }
    if (q>p){
        cout<<-1;
        return 0;
    }
    while (n>=0){
        int x=n;
        int O=0;
        while(b[n]!=0){
            if (a[x]!=0){
                b[n]--;
                a[x]--;
                T+=O;
            }
            else{
                x-=1;
                O+=t[x];
            }
        }
        n--;
    }
    cout<<T;
}
