#include <iostream>
#include <vector>

const int UKURAN_PAPAN = 3;

void TampilkanPapan(const std::vector<std::vector<char>>& papan) {
    for (int i = 0; i < UKURAN_PAPAN; i++) {
        for (int j = 0; j < UKURAN_PAPAN; j++) {
            std::cout << papan[i][j] << " ";
        }
        std::cout << "\n";
    }
}

bool IsPenuh(const std::vector<std::vector<char>>& papan) {
    for (int i = 0; i < UKURAN_PAPAN; i++) {
        for (int j = 0; j < UKURAN_PAPAN; j++) {
            if (papan[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool IsMenang(const std::vector<std::vector<char>>& papan, char tanda) {
    for (int i = 0; i < UKURAN_PAPAN; i++) {
        // Cek baris
        if (papan[i][0] == tanda && papan[i][1] == tanda && papan[i][2] == tanda) {
            return true;
        }
        // Cek kolom
        if (papan[0][i] == tanda && papan[1][i] == tanda && papan[2][i] == tanda) {
            return true;
        }
    }
    // Cek diagonal
    if (papan[0][0] == tanda && papan[1][1] == tanda && papan[2][2] == tanda) {
        return true;
    }
    if (papan[0][2] == tanda && papan[1][1] == tanda && papan[2][0] == tanda) {
        return true;
    }
    return false;
}

int main() {
    std::vector<std::vector<char>> papan(UKURAN_PAPAN, std::vector<char>(UKURAN_PAPAN, ' '));
    char tanda = 'X';

    std::cout << "Selamat datang di permainan Tic-Tac-Toe!\n";
    std::cout << "Pemain 1 (X) vs Pemain 2 (O)\n";
    std::cout << "Papan permainan:\n";
    TampilkanPapan(papan);

    int baris, kolom;
    bool selesai = false;

    while (!selesai) {
        std::cout << "Pemain " << tanda << ", masukkan baris dan kolom (0-2): ";
        std::cin >> baris >> kolom;

        if (baris < 0 || baris >= UKURAN_PAPAN || kolom < 0 || kolom >= UKURAN_PAPAN || papan[baris][kolom] != ' ') {
            std::cout << "Tebakan tidak valid. Coba lagi.\n";
            continue;
        }

        papan[baris][kolom] = tanda;
        TampilkanPapan(papan);

        if (IsMenang(papan, tanda)) {
            std::cout << "Pemain " << tanda << " menang!\n";
            selesai = true;
        } else if (IsPenuh(papan)) {
            std::cout << "Permainan berakhir. Tidak ada pemenang.\n";
            selesai = true;
        } else {
            tanda = (tanda == 'X') ? 'O' : 'X';
        }
    }

    return 0;
}
