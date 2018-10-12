/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <iostream>
#include <math.h>
#include <complex>

using namespace std;

void praktik1() {
    int bilangan;
    cout << "Masukan bilangan: ";
    cin >> bilangan;
    cout << endl;
    if (bilangan == 0) {
        cout << "Bilangan nol";
    } else if (bilangan > 0) {
        cout << "Bilangan positif";
    } else {
        cout << "Bilangan negatif";
    }

}

void praktik2() {
    int a, b, c;
    float D, x1, x2;
    cout << "Masukan nilai a: ";
    cin >> a;
    cout << "Masukan nilai b: ";
    cin >> b;
    cout << "Masukan nilai c: ";
    cin >> c;
    D = (b * b)-(4 * a * c);
    if (D > 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "X1: " << x1;
        cout << "X2: " << x2;
    } else if (D == 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = x1;
        cout << "X1: " << x1;
        cout << "X2: " << x2;
    } else {
        cout << "akar-akar bersifat imaginer!";
    }

}

void praktik3() {
    float uts, uas, tugas, nilaiAkhir;
    char nilaiHuruf;
    cout << "Masukan nilai UTS: ";
    cin >> uts;
    cout << "Masukan nilai UAS: ";
    cin >> uas;
    cout << "Masukan nilai Tugas: ";
    cin >> tugas;
    nilaiAkhir = ((0.35 * uts) + (0.45 * uas) + (0.2 * tugas)) / 3;
    if (nilaiAkhir >= 85) {
        nilaiHuruf = 'A';
    } else if (nilaiAkhir >= 70) {
        nilaiHuruf = 'B';
    } else if (nilaiAkhir >= 55) {
        nilaiHuruf = 'C';
    } else if (nilaiAkhir >= 40) {
        nilaiHuruf = 'D';
    } else {
        nilaiHuruf = 'E';
    }
    cout << "Nilai Angka: " << nilaiAkhir << endl;
    cout << "Nilai Huruf: " << nilaiHuruf << endl;

}

void praktik4() {
    float pendapatan, jasa, komisi, total;
    cout << "Pendapatan hari ini Rp.";
    cin >> pendapatan;
    if (pendapatan >= 0 && pendapatan <= 200000) {
        jasa = 10000;
        komisi = 0.1 * pendapatan;
    } else if (pendapatan <= 500000) {
        jasa = 20000;
        komisi = 0.15 * pendapatan;
    } else {
        jasa = 30000;
        komisi = 0.2 * pendapatan;
    }
    total = jasa + komisi;

    cout << "Uang jasa Rp." << jasa << endl;
    cout << "Uang jasa Rp." << komisi << endl;
    cout << "Total     Rp." << total << endl;

}