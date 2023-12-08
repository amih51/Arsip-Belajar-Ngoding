#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n, k; cin >> n >> k;
        int arr[n];
        for(int j=0; j<n; j++){
            cin >> arr[j];
        } 
        int start = 0;
        
        for(int j=0; j<n;j++){
            int count = 1;
            for(int l=j+1; l<n; l++){
                if(arr[j]==arr[l]){
// cout << "\ntessst ";
                    count++;
                    // arr[k]=-1;
                    }
                if(count==k){
                    start = l;
                    break;
                }
            }
            if(count==k)break;
        }
//         int ver = 0;
//         if(start != 0){
// cout << i+1 << ". === ";
//             for(int j=start; j<n;j++){
//                 int count = 1;
//                 for(int l=j+1; l<n; l++){
//                     if(arr[j]==arr[l]){
//                         count++;
//                         // arr[j]=-1;
//                     }
//                     if(count==k){
//                         ver++;
//                         break;
//                     }
// cout << count << " ";
//                 }
//                 if(count==k)break;
//             }
//         }
        (ver!=0) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
}