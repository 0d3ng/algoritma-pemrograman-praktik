/*
 * Copyright (c) 2018
 * All rights reserved.
 * Written by nopri <lepengdados@gmail.com>, 29/09/2018
 */

#include "Tugas.h"
#include <iostream>
#include <cmath>

using namespace std;

void nomor1() {
    double yard, kaki, inchi, meter;
    cout << "Masukan panjang(m): ";
    cin >> meter;
    yard = (double) meter / 0.9144;
    kaki = (double) meter / 0.3048;
    inchi = (double) meter / 0.0254;
    cout << yard << " yard" << kaki << " kaki" << inchi << " inchi" << meter << " meter";
}

void nomor2() {
    string time_a, time_b;
    int hour_a, minute_a, second_a;
    int hour_b, minute_b, second_b;
    cout << "Masukan waktu A(HH:mm:ss): ";
    cin >> time_a;
    cout << "Masukan waktu B(HH:mm:ss): ";
    cin >> time_b;
    hour_a = stoi(time_a.substr(0, 2));
    minute_a = stoi(time_a.substr(3, 5));
    second_a = stoi(time_a.substr(6, 8));
    hour_b = stoi(time_b.substr(0, 2));
    minute_b = stoi(time_b.substr(3, 5));
    second_b = stoi(time_b.substr(6, 8));
    cout << "Selisih " << hour_b - hour_a << " jam " << minute_b - minute_a << " menit " << second_b - second_a << " detik";
}

void nomor3() {
    int tinggi_badan = 0, berat_badan = 0;
    cout << "Program menghitung berat badan ideal " << endl;
    cout << "==================================== " << endl;
    cout << "Masukan tinggi badan(cm): ";
    cin>>tinggi_badan;
    berat_badan = tinggi_badan - 100 - (0.1 * (tinggi_badan - 100));
    cout << "Berat badan: " << berat_badan;
} 