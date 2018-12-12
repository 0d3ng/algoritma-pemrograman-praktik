/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Dec 7, 2018 6:14:25 AM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>

#include "Modul10.h"
using namespace std;

void modul10_latihan1() {
    int data[5];
    for (int i = 0; i < 5; i++) {
        cout << "masukan data ke-" << i + 1 << ": ";
        cin >> data[i];
    }
    for (int i = 0; i < 5; i++) {
        cout << data[i] << " ";
    }

}

void modul10_latihan2() {
    int data[] = {5, 12, 15, 35, 22, 98, 11, 456, 2, 99};
    int panjang = sizeof(data)/sizeof(data[0]);
    for (int i = 0; i < panjang; i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    int cari = 0;
    cout << "masukan data yang dicari: ";
    cin >> cari;
    for (int i = 0; i < 10; i++) {
        if (data[i] == cari) {
            cout << "Data yang ada cari ketemu pada index ke-" << i;
        } else {
            cout << "Data tidak ditemukan!";
        }

    }
}

void modul10_latihan3() {
    int data[] = {5, 12, 15, 35, 22, 98, 11, 456, 2, 99};
    int max = 0, min = 1000, total = 0;
    for (int i = 0; i < 10; i++) {
        cout << data[i] << " ";
        total += data[i];
        if (data[i] > max) {
            max = data[i];
        }
        if (data[i] < min) {
            min = data[i];
        }
    }
    cout << endl;
    cout << "Nilai terendah : " << min << endl;
    cout << "Nilai tertinggi: " << max << endl;
    cout << "Nilai rerata   : " << (float) total / 10 << endl;
}

void modul10_tugas() {
    char nama[] = {'N', 'O', 'P', 'R', 'I', 'A', 'N', 'T', 'O'};
    int length = sizeof(nama)/sizeof(nama[0]);
    for (int i = 0; i < length; i++) {
        for (int i = 0; i < 100000000; i++) {
        }
        cout << nama[i] << " ";
    }
    cout << endl;
}