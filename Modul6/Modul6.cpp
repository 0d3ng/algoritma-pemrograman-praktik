/*
 * algoritma-pemrograman-praktik

 * Copyright (c) 2018
 * All rights reserved.
 * Written by od3ng created on Oct 26, 2018 9:25:38 PM
 * Email   : lepengdados@gmail.com
 * Github  : 0d3ng
 * Hp      : 085878554150
 */

#include <iostream>

using namespace std;

void contoh1() {
    for (int i = 0; i < 10; i++) {
        cout << "Fakultas Teknologi Informasi dan Elektro" << endl;
    }
}

void contoh2() {
    for (int i = 0; i < 5; i++) {
        cout << i << endl;
    }
    for (int i = 0; i < 30; i+=5) {
        cout << i << endl;
    }
    for (int i = 5; i > 0; i--) {
        cout << i << endl;
    }
    for (int i = 50; i > 0; i-=10) {
        cout << i - 10 << endl;
    }
}

void contoh3() {
    char A, B, C;
    for (A = 'a', B = 0, C = 1; A <= 'e'; A++, B = B + 5, C = C * 3) {
        cout << "Nilai A:" << A << endl;
        cout << "Nilai B:" << B << endl;
        cout << "Nilai C:" << C << endl;
    }
}

void tugas1() {
    for (int i = 125; i < 200; i += 5) {
        cout << i << endl;
    }

}

void tugas2() {
    int max, sum;
    cout << "Masukan nilai max: ";
    cin >> max;
    for (int i = 0; i < max; i++) {
        sum += i;
    }
    cout << "Nilai total: " << sum << endl;
    cout << "Nilai rata: " << (float) sum / (float) max;
}