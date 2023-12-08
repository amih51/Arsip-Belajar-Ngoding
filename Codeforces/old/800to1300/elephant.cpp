#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int step=0;
    while(n>0){
        step++;
        if(n>=5){
            n-=5;
        }else if(n==4){
            n-=4;
        }else if(n==3){
            n-=3;
        }else if(n==2){
            n-=2;
        }else if(n==1){
            n-=1;
        }
    }
    cout << step << endl;
}