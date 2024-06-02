#include <iostream>
#include <string>
using namespace std;

// Struct untuk menyimpan data kamar
struct Room {
    string guestName;
    bool isOccupied;
};

int main() {
    int numRooms;
    cout << "Masukkan jumlah kamar hotel: ";
    cin >> numRooms;

    // Array of Room structs
    Room rooms[numRooms];

    // Inisialisasi semua kamar sebagai tidak terisi
    for (int i = 0; i < numRooms; i++) {
        rooms[i].isOccupied = false;
    }

    int choice;
    string name;
    int roomNumber;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Check-in" << endl;
        cout << "2. Check-out" << endl;
        cout << "3. Tampilkan daftar tamu" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan nama tamu: ";
                cin >> name;
                cout << "Masukkan nomor kamar: ";
                cin >> roomNumber;
                if (roomNumber >= 1 && roomNumber <= numRooms) {
                    if (!rooms[roomNumber - 1].isOccupied) {
                        rooms[roomNumber - 1].guestName = name;
                        rooms[roomNumber - 1].isOccupied = true;
                        cout << "Check-in sukses untuk " << name << " di kamar " << roomNumber << endl;
                    } else {
                        cout << "Kamar " << roomNumber << " sudah terisi." << endl;
                    }
                } else {
                    cout << "Nomor kamar tidak valid." << endl;
                }
                break;
            case 2:
                cout << "Masukkan nomor kamar: ";
                cin >> roomNumber;
                if (roomNumber >= 1 && roomNumber <= numRooms) {
                    if (rooms[roomNumber - 1].isOccupied) {
                        cout << "Check-out sukses untuk " << rooms[roomNumber - 1].guestName << " dari kamar " << roomNumber << endl;
                        rooms[roomNumber - 1].guestName = "";
                        rooms[roomNumber - 1].isOccupied = false;
                    } else {
                        cout << "Kamar " << roomNumber << " kosong." << endl;
                    }
                } else {
                    cout << "Nomor kamar tidak valid." << endl;
                }
                break;
            case 3:
                cout << "Daftar tamu yang menginap:" << endl;
                for (int i = 0; i < numRooms; i++) {
                    if (rooms[i].isOccupied) {
                        cout << "Kamar " << i + 1 << ": " << rooms[i].guestName << endl;
                    }
                }
                break;
            case 4:
                cout << "Terima kasih telah menggunakan program ini." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
        }
    } while (choice != 4);

    return 0;
}u