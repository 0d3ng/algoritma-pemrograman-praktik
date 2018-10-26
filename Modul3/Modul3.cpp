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
    string message;
    message = nilai > 50 ? "Congratulations!" : "Fail!";
    //    if (nilai > 50) 
    //        cout << "Congratulations!";
    //    else 
    //        cout << "Fail!";
    cout << message;

}

void kondisiIfElseOperatorAnd() {
    cout << "Masukan nilai: ";
    cin >> nilai;
    cout << endl;
    string message;
    message = nilai > 0 && nilai < 10 ? "Anda memasukan angka 1-10!" : "Anda tidak memasukan angka 1-10!";
    cout << message;
    //    if (nilai > 0 && nilai < 10) {
    //        cout << "Anda memasukan angka 1-10!";
    //    } else {
    //        cout << "Anda tidak memasukan angka 1-10!";
    //    }
}

void kondisiIfElseOperatorOr() {
    cout << "Masukan huruf kecil: ";
    cin >> nilai;
    cout << endl;
    cout << "Nilai: " << nilai << endl;
    ;
    if ((float) nilai == 'a' || (float) nilai == 'i' || (float) nilai == 'u' || (float) nilai == 'e' || (float) nilai == 'o') {
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

void menghitungGaji() {
    double gapok, pajak;
    char menikah;
    int anak;
    cout << "Masukan gaji pokok: ";
    cin>>gapok;
    cout << "Apakah sudah menikah?y/n";
    cin>> menikah;
    if (menikah == 'y') {
        gapok += 100000;
        cout << "Masukan jumlah anak: ";
        cin>>anak;
        if (anak < 2) {
            gapok += anak * 50000;
        } else {
            gapok += anak * 50000;
        }
    }
    if (gapok >= 250000) {
        pajak = (0.1 * gapok);
    }
    cout << "Pajak: " << pajak << endl;
    gapok = gapok - pajak;
    cout << "Gaji anda: " << gapok;

}