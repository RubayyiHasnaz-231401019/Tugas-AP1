#include <iostream>

using namespace std;
struct data_tanggal
{
    int tahun;
    int bulan;
    int tanggal;
    string nama;
};

int main()
{
    data_tanggal lahir;
    cout <<"masukkan nama : ";
    cin >> lahir.nama;
    cout <<"masukkan tahun lahir: ";
    cin >> lahir.tahun;
    cout <<"masukkan bulan lahir: ";
    cin >> lahir.bulan;
    cout <<"masukkan hari lahir: ";
    cin >> lahir.tanggal;
    cout <<"nama: " << lahir.nama<<endl;
    cout <<"tanggal lahir: "<< lahir.tanggal<<endl;
    cout <<"bulan lahir: "<< lahir.bulan<<endl;
    cout <<"tahun lahir: "<< lahir.tahun<<endl;
    
}