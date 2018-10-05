/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 06/10/2018
 */

#include <iostream>
#include "Modul3.h"

using namespace std;

float nilai;

void kondisiIf() {

    cout << "Masukan nilai: ";
    cin >> nilai;
    cout << endl;
    if (nilai > 50) {
        cout << "Congratulations!";
    }

}

void kondisiIfElse() {
    cout << "Masukan nilai: ";
    cin >> nilai;
    cout << endl;
    if (nilai > 50) {
        cout << "Congratulations!";
    } else {
        cout << "Fail!";
    }
}

void kondisiIfElseOperatorAnd() {
    cout << "Masukan nilai: ";
    cin >> nilai;
    cout << endl;
    if (nilai > 0 && nilai < 10) {
        cout << "Anda memasukan angka 1-10!";
    } else {
        cout << "Anda tidak memasukan angka 1-10!";
    }
}

void kondisiIfElseOperatorOr() {
    cout << "Masukan huruf kecil: ";
    cin >> nilai;
    cout << endl;
    if (nilai == 'a' || nilai == 'i' || nilai == 'u' || nilai == 'e' || nilai == 'o') {
        cout << "Anda memasukan huruf vokal";
    } else {
        cout << "Anda memasukan huruf konsonan";
    }

}

void kondisiIfElseOperatorDiskon() {
    double bayar, diskon;
    cout << "Total bayar: ";
    cin >> bayar;
    cout << endl;
    if (bayar >= 50000) {
        diskon = 0.2 * bayar;
    }
    cout << "Anda harus membayar Rp. " << (bayar - diskon);
}