#include <iostream>
using namespace std;

int main() {
    string nama;
    float pertandingan1, pertandingan2, pertandingan3;
    float rata_rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;

    cout << "Nama Siswa : ";
    getline(cin, nama);

    cout << "Nilai Pertandingan I : ";
    cin >> pertandingan1;

    cout << "Nilai Pertandingan II : ";
    cin >> pertandingan2;

    cout << "Nilai Pertandingan III : ";
    cin >> pertandingan3;

    rata_rata = (pertandingan1 + pertandingan2 + pertandingan3) / 3;

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rata_rata;
    cout << " dari hasil perlombaan yang diikutinya." << endl;

    if (rata_rata >= 85) {
        cout << "Hadiah yang didapat adalah Seperangkat Mobil" << endl;
    }
    else if (rata_rata >= 70) {
        cout << "Hadiah yang didapat adalah Uang sebesar Rp. 500.000" << endl;
    }
    else {
        cout << "Hadiah yang didapat adalah Hiburan" << endl;
    }

    return 0;
}