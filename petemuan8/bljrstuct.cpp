#include <iostream>
#include <vector>
using namespace std;
//struct berfungsi membuat tipe data yang dibuat pengguna 
struct Mahasiswa {
    string nama, nim;
    float nilai;
};

int main () {

    system ("cls");

    Mahasiswa mhs;
    vector <Mahasiswa> mahasiswa; //fungsi vector mengelola dan memanipulasi data 
    int n;
    // cout << "masukkan nama : ";
    // getline (cin, mhs.nama);

    // cout << "masukkan nim : ";
    // cin >> mhs.nim;

    // cout << "masukkan nilai : ";
    // cin >> mhs.nilai;

    // cout << "nama anda " << mhs.nama << " dengan nim " << mhs.nim << " dan nilai anda " << mhs.nilai << endl;

    cout << "masukkan banyak mahasiswa: ";
    cin >> n;

    for (int i = 0; i < n ; i++){
        cout <<"mahasiswa " << i+1 << endl;

        cin.get ();

        cout << "masukkan nama : ";
        getline (cin, mhs.nama);

        cout << "masukkan nim : ";
        cin >> mhs.nim;

        cout << "masukkan nilai : ";
        cin >> mhs.nilai;

        mahasiswa.push_back (mhs); // menambahkan elemen baru ke akhir vektor


    }

    for (int i = 0; i < n; i++){
        cout<< "mahasiswa " << i +1 << endl;
        cout << "nama: " << mahasiswa [i].nama << endl;
        cout << "NIM: " << mahasiswa [i].nim << endl;
        cout << "Nilai: " << mahasiswa [i].nilai << endl;
    }
    return 0;
}
