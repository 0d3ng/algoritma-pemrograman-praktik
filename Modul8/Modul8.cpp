/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Nov 23, 2018 8:06:53 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include<iostream>
#include<math.h>
#include "Modul8.h"
using namespace std;

void latihan1() {
    int tinggi;
    cout << "Masukan tinggi bintang: ";
    cin >> tinggi;
    for (int i = 0; i < tinggi; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void latihan1a() {
    int tinggi, space;
    cout << "Masukan tinggi bintang: ";
    cin >> tinggi;
    space = tinggi / 2;
    for (int i = 0; i <= tinggi; i++) {
        if (i % 2 != 0) {
            for (int k = 0; k < space; k++) {
                cout << " ";
            }

            for (int j = 0; j < i; j++) {
                for (int delay = 0; delay < 100000000; delay++) {
                }
                cout << "*";
            }
            cout << endl;
            space--;
        }
    }
}

void latihan1b() {
    int tinggi, space = 0;
    cout << "Masukan tinggi bintang: ";
    cin >> tinggi;
    for (int i = tinggi; i >= 0; i--) {
        if (i % 2 != 0) {
            for (int k = 0; k < space; k++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
            space++;
        }
    }
}

void latihan2() {
    int tinggi;
    cout << "Masukan tinggi bintang: ";
    cin >> tinggi;
    for (int i = 1; i <= tinggi; i++) {
        for (int j = 1; j <= tinggi; j++) {
            cout << i * j << " ";
        }
        cout << endl;
    }
}

void latihan3() {
    int tinggi;
    cout << "Masukan tinggi bintang: ";
    cin >> tinggi;
    for (int baris = 1; baris <= tinggi; baris++) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "*";
        }
        cout << endl;
    }
}

void latihan4() {
    int row = 0;
    while (row <= 3) {
        int col = 1;
        {
            cout << " ";
            col++;
        }
        col = 0;
        while (col <= row) {
            cout << " " << pow(2, col);
            col++;
        }
        while (col >= 0) {
            cout << " " << pow(2, col);
        }
        cout << endl;
        row++;
    }

}