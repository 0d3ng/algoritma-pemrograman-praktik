/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 29/09/2018
 */

#include "Modul1.h"
#include <iostream>

using namespace std;

void konversi_suhu() {
    double tc, tf, tr;
    cout << "Masukkan celcius: ";
    cin >> tc;

    double temp = (double) 9 / 5;
    tf = (temp * tc) + 32;
    temp = (double) 4 / 5;
    tr = temp * tc;
    cout << endl;
    cout << "Fahrenheit: " << tf << endl;
    cout << "Reamur: " << tr << endl;
}

void konversi_satuan_panjang() {
    double yard, kaki, inchi, meter;
    cout << "Masukan yard: ";
    cin >> yard;
    cout << "Masukan kaki: ";
    cin >> kaki;
    cout << "Masukan inchi: ";
    cin >> inchi;
    meter = (0.9144 * yard) + (0.3048 * kaki) + (0.0254 * inchi);
    cout << yard << " yard" << kaki << " kaki" << inchi << " inchi" << meter << " meter";
}