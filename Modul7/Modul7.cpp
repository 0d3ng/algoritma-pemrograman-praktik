/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 2, 2018 9:12:27 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>

#include "Modul7.h"

using namespace std;

double min = 0, max = 0, rerata = 0, total = 0;
int n = 0;

void sistemMenu() {
    int pilih = 0;

    do {
        cout << "Program menghitung bilangan" << endl;
        cout << "1. Input data" << endl;
        cout << "2. Hitung Min" << endl;
        cout << "3. Hitung Max" << endl;
        cout << "4. Hitung rata-rata" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih: ";
        cin >> pilih;
        switch (pilih) {
            case 1:
                inputData();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
        }
    } while (pilih != 5);
}

void inputData() {
    cout << "Masukan banyaknya data: ";
    cin >> n;
    int i = 0;
    while (n < i) {
        double temp = 0;
        cout << "masukan data: ";
        cin >> temp;
        total += temp;
        i++;
    }
}