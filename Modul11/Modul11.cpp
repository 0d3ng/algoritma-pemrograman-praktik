/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 13, 2018 2:26:27 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>
#include<iomanip>

#include "Modul11.h"

using namespace std;

void modul11_latihan1() {
    int data[5][3] = {
        {1, 2, 3},
        {2, 3, 4},
        {3, 4, 5},
        {5, 6, 7},
        {6, 7, 8}
    };
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << "data[" << i << "][" << j << "]=" << data[i][j];
        }
        cout << endl;
    }
}

void modul11_latihan2() {
    int data[3][2] = {
        {1, 2},
        {2, 3},
        {3, 4}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << setw(10) << "data[" << i << "][" << j << "]=" << data[i][j];
        }
        cout << endl;
    }
}

void modul11_latihan3() {
    int total = 0, i = 0, j = 0;
    int data_lulus[3][2] = {
        {10, 20},
        {15, 25},
        {100, 300}
    };
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            cout << setw(10) << "data[" << i << "][" << j << "]=" << data_lulus[i][j];
            total += data_lulus[i][j];
        }
        cout << endl;
    }
    cout << setw(17) << "Total      :" << total << endl;
    cout << setw(17) << "Rata-rata  :" << (float) total / (i * j) << endl;
}

//tugas di kelas, penyelesaian tidak perlu looping

void modul11_tugas1() {
    int data_kelulusan_mhs[2][3] = {
        {2015, 40, 60}, //tahun,TK,TE
        {2016, 50, 90}
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << setw(10) << "data[" << i << "][" << j << "]=" << data_kelulusan_mhs[i][j];
        }
        cout << endl;
    }
    cout << "Rata-rata TK   :" << (float) (data_kelulusan_mhs[0][1] + data_kelulusan_mhs[1][1]) / 2 << endl;
    cout << "Rata-rata TE   :" << (float) (data_kelulusan_mhs[0][2] + data_kelulusan_mhs[1][2]) / 2 << endl;
    cout << "Rata-rata 2015 :" << (float) (data_kelulusan_mhs[0][1] + data_kelulusan_mhs[0][2]) / 2 << endl;
    cout << "Rata-rata 2016 :" << (float) (data_kelulusan_mhs[1][1] + data_kelulusan_mhs[1][2]) / 2 << endl;
}

//jika yang di atas selesai, boleh lanjut ini. membuat sebuah matriks 2D

void modul11_tugas2() {
    int baris = 0, kolom = 0;
    int min = 1000000, max = 0, total = 0;
    cout << "Masukan ukuran matriks(baris): ";
    cin >> baris;
    cout << "Masukan ukuran matriks(kolom): ";
    cin >> kolom;
    int matriks[baris][kolom];
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "Masukan elemen ke-[" << i << "][" << j << "]: ";
            cin >> matriks[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << "data ke-[" << i << "][" << j << "]: " << matriks[i][j];
            total += matriks[i][j];
            if (matriks[i][j] < min) {
                min = matriks[i][j];
            }
            if (matriks[i][j] > max) {
                max = matriks[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
    cout << "Total      :" << total << endl;
    cout << "Rata-rata  :" << (float) total / (baris * kolom) << endl;
    cout << "Min        :" << min << endl;
    cout << "Max        :" << max << endl;
}