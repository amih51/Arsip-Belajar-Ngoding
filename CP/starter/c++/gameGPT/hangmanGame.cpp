#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int main() {
    srand(static_cast<unsigned int>(time(0))); // Menyiapkan seed untuk random number generator

    std::vector<std::string> kata = { "apel", "jeruk", "mangga", "pisang", "anggur" };
    int randomIndex = rand() % kata.size(); // Menghasilkan indeks acak untuk memilih kata
    std::string tebakan;
    int jumlahTebakan = 0;

    std::string kataTebakan = kata[randomIndex];
    int panjangKata = kataTebakan.length();
    std::string tebakanSementara(panjangKata, '-');

    std::cout << "Selamat datang di permainan Tebak Kata!\n";
    std::cout << "Kategori: Buah-buahan\n";
    std::cout << "Kata yang harus ditebak memiliki " << panjangKata << " huruf.\n";

    while (tebakanSementara != kataTebakan) {
        std::cout << "Tebak kata: " << tebakanSementara << "\n";
        std::cout << "Masukkan tebakan huruf (a-z): ";
        std::cin >> tebakan;
        jumlahTebakan++;

        if (tebakan.length() != 1) {
            std::cout << "Masukkan hanya satu huruf.\n";
            continue;
        }

        char hurufTebakan = tebakan[0];
        bool tebakanBenar = false;

        for (int i = 0; i < panjangKata; i++) {
            if (kataTebakan[i] == hurufTebakan) {
                tebakanSementara[i] = hurufTebakan;
                tebakanBenar = true;
            }
        }

        if (tebakanBenar) {
            std::cout << "Tebakan benar!\n";
        } else {
            std::cout << "Tebakan salah.\n";
        }
    }

    std::cout << "Selamat! Anda berhasil menebak kata " << kataTebakan << " dalam " << jumlahTebakan << " tebakan.\n";

    return 0;
}
