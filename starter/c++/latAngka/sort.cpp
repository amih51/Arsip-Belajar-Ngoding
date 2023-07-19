#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << "Mengurutkan array\nMasukkan size: ";
    int n;
    cin >> n;

    vector<int> arr(n);

    cout << "Masukkan nilai: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int box;
    for(int j=1; j<n; j++){
        for(int i=0; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                box = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = box;
            }
        }
        cout << j << ". ";
        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    cout << "Hasil: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}