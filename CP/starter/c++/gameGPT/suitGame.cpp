#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Menyiapkan seed untuk random number generator

    std::cout << "Selamat datang di permainan Batu-Gunting-Kertas!\n";
    std::cout << "Pilihan: 1. Batu, 2. Gunting, 3. Kertas\n";

    int pilihanPemain, pilihanKomputer;
    std::cout << "Masukkan pilihan Anda (1-3): ";
    std::cin >> pilihanPemain;

    if (pilihanPemain < 1 || pilihanPemain > 3) {
        std::cout << "Pilihan tidak valid. Permainan berakhir.\n";
        return 0;
    }

    pilihanKomputer = rand() % 3 + 1; // Menghasilkan angka acak antara 1 hingga 3 sebagai pilihan komputer

    std::cout << "Anda memilih ";
    switch (pilihanPemain) {
        case 1:
            std::cout << "Batu.\n";
            break;
        case 2:
            std::cout << "Gunting.\n";
            break;
        case 3:
            std::cout << "Kertas.\n";
            break;
    }

    std::cout << "Komputer memilih ";
    switch (pilihanKomputer) {
        case 1:
            std::cout << "Batu.\n";
            break;
        case 2:
            std::cout << "Gunting.\n";
            break;
        case 3:
            std::cout << "Kertas.\n";
            break;
    }

    // Menentukan hasil permainan
    if (pilihanPemain == pilihanKomputer) {
        std::cout << "Hasil: Seri!\n";
    } else if (
        (pilihanPemain == 1 && pilihanKomputer == 2) ||
        (pilihanPemain == 2 && pilihanKomputer == 3) ||
        (pilihanPemain == 3 && pilihanKomputer == 1)
    ) {
        std::cout << "Hasil: Anda Menang!\n";
    } else {
        std::cout << "Hasil: Komputer Menang!\n";
    }

    return 0;
}
