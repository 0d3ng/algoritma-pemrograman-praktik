/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 1, 2018 10:35:02 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include<iostream>
#include "Modul9.h"
using namespace std;

void latihan91() {
    int bil;
    long fak = 1;
    cout << "Masukan angka  : ";
    cin >> bil;
    while (bil >= 1) {
        fak *= bil;
        bil--;
    }
    cout << "Faktorial      : " << fak;
}

void latihan92() {
    int bil1, bil2, sisa;
    cout << "Masukan angka: ";
    cin >> bil1;
    cout << "Masukan angka: ";
    cin >> bil2;
    if (bil1 < bil2) {
        int temp = bil1;
        bil1 = bil2;
        bil2 = temp;
    }
    do {
        sisa = bil1 % bil2;
        bil1 = bil2;
        bil2 = sisa;
    } while (sisa != 0);
    int FPB = bil1;
    cout << "Bilangan1  :" << bil1 << endl;
    cout << "Bilangan2  :" << bil2 << endl;
    cout << "FPB        :" << FPB << endl;
}

void latihan93() {
    int jumlah = 0, bilangan = 0;
    for (bilangan = 0; bilangan < 20; bilangan++) {
        cout << jumlah << " ";
        if (jumlah >= 100) {
            break;
        }
        jumlah += bilangan;
    }
    cout << endl;
    cout << "Jumlah deret bilangan 1..." << bilangan << " adalah " << jumlah << endl;
}

void latihan94() {
    int jumlah = 0, bilangan = 0;
    for (bilangan = 0; bilangan <= 5; bilangan++) {
        if (bilangan == 2 || bilangan == 3) {
            continue;
        }

        jumlah += bilangan;
    }
    cout << "Jumlah deret bilangan 1..." << bilangan << " adalah " << jumlah << endl;
}

void latihan95() {
    int a = 0, b = 0;
    char lagi;
atas:
    cout << "masukan bilangan: ";
    cin>>a;
    b = a % 2;
    cout << "hasil " << a << "%2 adalah " << b << endl;
    cout << "ingin hitung lagi?Y/T: ";
    cin >> lagi;
    if (lagi == 'y' || lagi == 'Y') {
        goto atas;
    }
}

void latihan9tugas1() {
    for (int i = 1; i <= 10; i++) {
        for (int j = i, k = 1; j <= 10 * i; j += i, k++) {
            if (k == i) {
                cout << " ";
            } else {
                cout << j << " ";
            }
        }
        cout << endl;
    }

}