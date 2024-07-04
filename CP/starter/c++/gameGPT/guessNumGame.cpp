#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Menyiapkan seed untuk random number generator
    int target = rand() % 100 + 1; // Menghasilkan angka acak antara 1 hingga 100
    int tebakan;
    int jumlahTebakan = 0;
    bool berhasil = false;

    std::cout << "Selamat datang di permainan tebak angka!\n";

    while (!berhasil) {
        std::cout << "Tebak angka (1-100): ";
        std::cin >> tebakan;
        jumlahTebakan++;

        if (tebakan == target) {
            std::cout << "Selamat! Anda berhasil menebak angka " << target << " dalam " << jumlahTebakan << " tebakan.\n";
            berhasil = true;
        } else if (tebakan < target) {
            std::cout << "Angka yang Anda tebak terlalu rendah.\n";
        } else {
            std::cout << "Angka yang Anda tebak terlalu tinggi.\n";
        }
    }

    return 0;
}
