/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng Create at Oct 20, 2018 2:25:14 AM
 * Email: lepengdados@gmail.com
 * Github: https://github.com/0d3ng
 * Hp: 085878554150

 */

#include "Modul5.h"
#include <iostream>


using namespace std;

void switchCase1() {
    int nilai;
    cout << "Masukan nilai test: ";
    cin >> nilai;
    switch (nilai / 10) {
        case 10:
        case 9:
        case 8:
            cout << 'A' << endl;
            break;
        case 7:
            cout << 'B' << endl;
            break;
        case 6:
        case 5:
            cout << 'C' << endl;
            break;
        case 4:
        case 3:
            cout << 'D' << endl;
            break;
        case 2:
        case 1:
        case 0:
            cout << 'E' << endl;
            break;
        default:
            cout << "Salah, Nilai diluar jangkauan" << endl;
    }
}

void switchCase2() {
    float uts, uas, tugas, nilaiakhir;
    char nilaihuruf;
    int gol;
    cout << "Masukan nilai uts: ";
    cin >> uts;
    cout << "Masukan nilai uas: ";
    cin >> uas;
    cout << "Masukan nilai tugas: ";
    cin >> tugas;
    nilaiakhir = (0.35 * uts + 0.45 * uas + 0.2 * tugas);
    if (nilaiakhir >= 85) {
        gol = 1;
    } else if (nilaiakhir >= 70 && nilaiakhir < 85) {
        gol = 2;
    } else if (nilaiakhir >= 55 && nilaiakhir < 70) {
        gol = 3;
    } else if (nilaiakhir >= 40 && nilaiakhir < 55) {
        gol = 4;
    } else if (nilaiakhir >= 0 && nilaiakhir < 40) {
        gol = 5;
    }

    switch (gol) {
        case 1:
            nilaihuruf = 'A';
            break;
        case 2:
            nilaihuruf = 'B';
            break;
        case 3:
            nilaihuruf = 'C';
            break;
        case 4:
            nilaihuruf = 'D';
            break;
        case 5:
            nilaihuruf = 'E';
            break;
        default:
            cout << "Nilai diluar 0-100" << endl;
    }
    cout << "Nilai angka: " << nilaiakhir << endl;
    cout << "Nilai huruf: " << nilaihuruf << endl;
}

void switchCase3() {
    char kode;
    cout << "Masukan kode barang [A..C]";
    cin >> kode;
    switch (kode) {
        case 'A':
            cout << "Alat Olahraga" << endl;
            break;
        case 'B':
            cout << "Alat Elektronik" << endl;
            break;
        case 'C':
            cout << "Alat Masak" << endl;
            break;
        default:
            cout << "Anda salah memasukan kode" << endl;
    }
}

void switchCase4() {
    int bulan, tahun, hari;
    cout << "Angka bulan: ";
    cin >> bulan;
    cout << "Angka tahun: ";
    cin >> tahun;
    switch (bulan) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            hari = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            hari = 30;
            break;
        case 2:
            if (tahun % 4 == 0) {
                hari = 29;
            } else
                hari = 28;
            break;
        default:
            cout << "Masukan bulan yang benar." << endl;
    }
    cout << "Jumlah hari: " << hari << endl;
}

void tugas() {
    cout << "Program menentukan apakah termasuk dalam kategori [weekend/weekday]" << endl;
    int hari;
    cout << "masukan har[1..7]: ";
    cin >> hari;
    switch (hari) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Weekdays" << endl;
            break;
        case 6:
        case 7:
            cout << "Weekend" << endl;
            break;
        default:
            cout << hari << " belum tersedia" << endl;
    }
}