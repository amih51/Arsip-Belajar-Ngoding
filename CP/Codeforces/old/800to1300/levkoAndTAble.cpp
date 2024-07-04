#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for (int j = 0; j < n; j++){
            if(j==i){
                cout << m;
            }else{
                cout << "0";
            }
            if(j!=n-1){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
}