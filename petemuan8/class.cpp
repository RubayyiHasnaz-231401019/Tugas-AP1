#include <iostream>
using namespace std;
class Mahasiswa{
    private: 
    //hanya dapat diakses dan dimodifikasi melalui fungsi anggota yang disediakan oleh class itu sendiri
    string nama, nim;
    float nilai;
    public: 
    //dapat diakses dan dimodifikasi secara langsung dari mana saja dalam program
    Mahasiswa (string nama, string nim, float nilai){
    this->nama = nama;
    this->nim = nim;
    this->nilai = nilai;
    }
    void display (){ //menampilkan pesan, instruksi, atau informasi lain kepada pengguna.
        cout << "nama: " << this -> nama << endl;
        cout << "nim: " << this -> nim << endl;
        cout << "nilai: " << this -> nilai << endl;
    }
};
int main (){
    system ("cls");
    Mahasiswa siswa1 ("andi", "2314010109", 45.6);
    siswa1.display(); //menampilkan hasil dari suatu komputasi atau perhitungan yang dilakukan oleh program.
    return 0;
}