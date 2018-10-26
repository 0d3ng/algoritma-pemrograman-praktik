/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 06/10/2018
 */

#include <iostream>
#include "Tugas3.h"
using namespace std;

void ganjilGenap() {
    int angka;
    cout << "Masukan angka: ";
    cin >> angka;
    cout << (angka % 2 == 0) ? "Genap" : "Ganjil";
}

void kategoriSuhu() {
    float suhu;
    cout << "Masukan suhu(derajat): ";
    cin >> suhu;
    cout << (suhu < 0) ? "Dingin" : "Panas";
}