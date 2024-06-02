#include <iostream>

using namespace std;

void garis() { 
    cout << "====================================================" << endl;
}

void bintang () {
    cout << "" << endl;
}

void menu() {
    garis();
    cout << "Selamat Datang di Program Kalkulator\n";
    garis();
    cout << "1. Tambah\n"; // \n untuk pindah baris
    cout << "2. Kurang\n";
    cout << "3. Kali\n";
    cout << "4. Bagi\n";
    cout << "5. Modulo\n";
    garis();
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

int bagi(float a, float b) {
    return a / b;
}

int modulo(int a, int b) {
    return a % b; // return digunakan untuk mengembalikan nilai (jika ada) ke tempat di mana fungsi tersebut dipanggil
}

int main () {
    char o, ulang;
    int a, b;
    do {
    menu();
    cout << "Masukkan operasi : ";
    cin >> o ;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    bintang();

    if (o == '+') {
        cout << "Hasil " << a  << " " << o << " " << b  << " = " << tambah(a, b) << endl;
    }
    if (o == '-') {
        cout << "Hasil " << a  << " " << o << " " << b  << " = " << kurang(a, b) << endl;
    }
    if (o == '/') {
        cout << "Hasil " << a  << " " << o << " " << b  << " = " << bagi(a, b) << endl;
    }
    if (o == '*') {
        cout << "Hasil " << a  << " " << o << " " << b  << " = " << kali(a, b) << endl;
    }
    if (o == '%') {
        cout << "Hasil " << a  << " " << o << " " << b  << " = " << modulo(a, b) << endl;
    }

    cout << "Apakah anda ingin melanjutkan (Y/T)"; cin >> ulang;
    } 
    while (ulang == 'y' || ulang == 'Y');
}