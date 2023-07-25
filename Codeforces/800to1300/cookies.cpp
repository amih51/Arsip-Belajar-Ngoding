#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> odd;
    vector<int> even;
    int sum = 0;

    for(int i=0; i<n; i++){
        int x;
        cin>>x;

        sum += x;
        if(x%2==1){
            odd.push_back(x);
        }else{
            even.push_back(x);
        }
    }
    if(sum%2==1){
        cout << odd.size() << endl;
    }else{
        cout << even.size() << endl;
    }
}