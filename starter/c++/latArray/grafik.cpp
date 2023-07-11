#include <iostream>
#include <array>
using namespace std;

int main(){
    
    cout << "\nNilai Mahasiswa\n\n";
    int nilai[10];

    for(int i = 0; i <= 10; i++){
        cout << "Mahasiswa dengan nilai ";
        if(i == 10){
            cout << "100  : ";
            cin >> nilai[i];

        } else {
            cout << i*10 << "-" << i*10+9 << " : ";
            cin >> nilai[i];
        }
    }

    //int mean = (nilai[1]+nilai[2]+nilai[3]+nilai[4]+nilai[5])

    float sum,mean,num;
    sum = 0;
    for(int i = 0; i <= 10; i++){
        //cout << "sum : " << sum << endl;
        sum += nilai[i] * (i * 10 + 5);
    }
    
    num = 0;
    for(int i = 0; i <= 10; i++){
        //cout << "num : " << num << endl;
        num += nilai[i];
    }

    mean = sum / num;
    int size = sizeof(nilai)/sizeof(nilai[0]);

    cout << endl;
    cout << "sum: " << sum << endl;
    cout << "num: " << num << endl;
    cout << "mean: " << mean << endl;
    cout << "sizeof: " << sizeof(nilai) << endl;
    cout << "sizeof:[] " << sizeof(nilai[0]) << endl;
    cout << "size " << sizeof(nilai) / sizeof(nilai[0]) << endl;

    cout << "\n\nGrafik\n" << endl;
    for(int i = 0; i <= size; i++){
        if(i==0){
            cout << i*10 << "-" << i*10+9 << "   : ";
            for(int j = 0; j < nilai[i]; j++){
                cout << "#";
            }
            cout << endl;
        } else if(i==10){
            cout << i*10 << "   : ";
            for(int j = 0; j < nilai[i]; j++){
                cout << "#";
            }
            cout << endl;

        } else{
            cout << i*10 << "-" << i*10+9 << " : ";
            for(int j = 0; j < nilai[i]; j++){
                cout << "#";
            }
            cout << endl;

        }
    }
    
    return 0;
}