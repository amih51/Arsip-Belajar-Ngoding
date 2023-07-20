#include <iostream>
#include <unordered_set>
#include <string> // tambahkan include untuk tipe data string

using namespace std;

int main(){
    string n; // ubah tipe data n menjadi string
    cin >> n;

    int next = 0;
    int temp = stoi(n); // ubah string menjadi integer menggunakan stoi
    int size = n.size();
    unordered_set<char> set; // ubah unordered_set menjadi unordered_set<char>
    while(next < temp){ // ubah n menjadi temp
        temp += 1;
        set.clear(); // hapus setiap iterasi
        for (char c : to_string(temp)){ // ubah integer menjadi string menggunakan to_string
            set.insert(c);
        }
        if(size == set.size()){
            next = temp; // ubah == menjadi =
        }
    }
    cout << next << endl;
    
    return 0; // tambahkan return 0 di akhir main
}
