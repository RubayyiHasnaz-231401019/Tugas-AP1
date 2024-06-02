#include <iostream>
#include "bahasamelayu.h"
using namespace std;

const int JumlahKamar = 10;

bool StatusKamar[JumlahKamar] = {true, true, true, true, true, true, true, true, true, true};
void PesanKamar(int nomor) {
    jikalau (nomor > 0 && nomor <= JumlahKamar && StatusKamar[nomor - 1]) {
        StatusKamar[nomor - 1] = false;
        cetak << "Kamar " << nomor << " berhasil dipesan.\n";
    } lainnya {
        cetak << "Kamar tidak tersedia atau nomor kamar tidak valid.\n";
    }
}

void CekStatusKamar(int nomor) {
    jikalau (nomor > 0 && nomor <= JumlahKamar) {
        jikalau (StatusKamar[nomor - 1]) {
            cetak << "Kamar " << nomor << " tersedia.\n";
        } lainnya { 
            cetak << "Kamar " << nomor << " sudah dipesan.\n";
        }
    } lainnya {
        cetak << "Nomor kamar tidak valid.\n";
    }
}

mulai () awal
    int pilihan, NomorKamar;
    hapus();

    do 
        awal
            cetak << "============================\n";
            cetak << "|       Hotel Obelia       |\n";
            cetak << "============================\n";
            cetak << "Menu :\n";
            cetak << "\t1. Pesan Kamar\n";
            cetak << "\t2. Cek Status Kamar\n";
            cetak << "\t3. Keluar\n";
            cetak << pindah;
            cetak << "Pilihan Menu : ";
            masuk >> pilihan;
            switch (pilihan) awal
            case 1:
                cetak << "Nomor kamar yang ingin dipesan (1-10) : ";
                masuk >> NomorKamar;
                PesanKamar(NomorKamar);
                cetak << pindah;
                break;
            case 2:
                cetak << "Nomor kamar yang ingin dicek (1-10) : ";
                masuk >> NomorKamar;
                CekStatusKamar(NomorKamar);
                cetak << pindah;
                break;
            case 3:
                cetak << "Keluar dari program.\n";
                break;
            default:
                cetak << "Pilihan tidak valid.\n";
        akhir
    akhir
    while (pilihan != 3);

    return 0;
    tahan;
akhir