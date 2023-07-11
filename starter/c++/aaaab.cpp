#include <iostream>
#include <array>

using namespace std;

int main() {
    array<int, 5> nilai = {1, 2, 3, 4, 5};
    cout << "Jumlah elemen dalam array std::array: " << nilai.size() << endl;

    int nilai2[] = {1, 2, 3, 4, 5};
    cout << sizeof(nilai2) << "\n" << sizeof(nilai2[0]) << endl;
    int jumlahElemen = sizeof(nilai2) / sizeof(nilai2[0]);
    cout << "Jumlah elemen dalam array standar: " << jumlahElemen << endl;

    return 0;
}
