#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        vector<long long> arr2(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            arr2[j] = arr[j];
        }
        sort(arr2.begin(),arr2.end());
        int isSort = 0;

        for(int j=0; j<n; j++){
            if(arr[j]%2 != arr2[j]%2)isSort++;
        }

        (isSort == 0) ? cout << "YES\n" : cout << "NO\n";
        // int swaps = 0;
        // for(int p=0; p<n; p++){
        //     int afk = 0;
        //     for (int j = 0; j < n; j++) {
        //         if (arr[j] % 2 == 0) {
        //             for (int k = j; k < n; k++) {
        //                 if (arr[k] % 2 == 0 && arr[k] < arr[j]) {
        //                     swap(arr[j], arr[k]);
        //                     swaps++;
            // for (int x = 0; x < n; x++) {
            //     cout << arr[x] << " ";
            // }
            // cout << "odd" << endl;
                //             break;
                //         } else {afk++;}
                //     }
                // } else {
                //     for (int k = j; k < n; k++) {
                //         if (arr[k] % 2 == 1 && arr[k] < arr[j]) {
                //             swap(arr[j], arr[k]);
                //             swaps++;
            // for (int x = 0; x < n; x++) {
            //     cout << arr[x] << " ";
            // }
            // cout << "even" << endl;
        //                     break;
        //                 } else {afk++;}
        //             }
        //         }
        //     }
        //     if(afk==n*n)break;
        // }

        // for (int x = 0; x < n; x++) {
        //     cout << arr[x] << " ";
        // }
        // cout << endl;

        // int isSort = 0;
        // for (int j = 0; j < n - 1; j++) {
        //     if (arr[j] > arr[j + 1]) isSort++;
        // }
        // (isSort == 0) ? cout << "YES\n" : cout << "NO\n";
    }
}
