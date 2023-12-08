#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;

    int result = 0;
    int x[n],y[n];
    for(int i=0; i<n; i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0; i<n; i++){
        int up=0, low=0, right=0, left=0;
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(x[i]==x[j]){
                if(y[i]<y[j]){up++;
                    break;}
            }
        }
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(x[i]==x[j]){
                if(y[i]>y[j]){low++;
                    break;}
            }
        }
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(y[i]==y[j]){     
                if(x[i]<x[j]){right++;
                    break;}
            }
        }
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(y[i]==y[j]){
                if(x[i]>x[j]){left++;
                    break;}
            }
        }
        if(low==1 && up==1 && right==1 && left==1) result++;
    }
    cout << result;
}