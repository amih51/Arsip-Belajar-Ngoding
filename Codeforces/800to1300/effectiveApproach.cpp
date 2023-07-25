#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[(int)1e5+3];
    for(int i=0; i<n; i++){
        int num; 
        cin >> num;      
        arr[num] = i;
    }
    unsigned long long a=0, b=0;
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int mm; cin >> mm;
        a += arr[mm]+1;
        b += n-arr[mm];
    }
    cout << a << " " << b << endl;
}