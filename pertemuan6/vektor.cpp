#include <iostream>
#include <vector>

using namespace std;
int main() {
    system ("cls");

    vector <string> nama_karyawan = {"andi","budi","santi","doni","yanto"};
    //  for (int i = 0; i <nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i]<< endl;
    //  }

    for (string karyawan : nama_karyawan) {
        cout << karyawan << endl;
    }
     // add data to vektor
     nama_karyawan.push_back("wawan");

     //delete data from vektor
    //  nama_karyawan.pop_back();

    //mengahpus data
     nama_karyawan.erase(nama_karyawan.begin () + 3);
    //  for (int i = 0; i <nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i]<< endl;
    //  }
}