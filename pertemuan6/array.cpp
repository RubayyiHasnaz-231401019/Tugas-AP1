#include <iostream>
// #include <array> //menyimpan kumpulan nilai yang bertipe data sama
using namespace std;
int main()
{
   system ("cls");
    int matrix [2][3]= {{1,3,5},{2,4,6}}; // untuk mebuat matriks 2 kali 3
    for (int i=0; i < 2 ; i++){
        for (int j = 0; j < 3; j ++) {
            cout << matrix [i][j]<< " " ;
    }
    cout << endl;
}

// int n;
// cout << "masukkan banyak mahasiswa : ";
// cin >> n;

//contoh 1 pengunaan array
// float nilai [n];
// for (int i =0; i<n; i++){
//     cout << "masukkan nilai mahasiswa ke " << i + 1 << " : ";
//     cin >> nilai [1];
// }
// for (int i = 0; i < n; i++){
//     cout << "nilai mahasiswa ke  " << i + 1 << " : " << nilai [1] << endl;

// }


//contoh 2
// string nama_karyawan [] = {"andi", "yusuf", "budi", "yanto","santika","dodi"};
// for (int i = 0; i< sizeof (nama_karyawan) / sizeof (string); i++){
//     cout << nama_karyawan [i] << endl;
// }

//contoh 3

// int matriks1 [2][2];
// int matriks2 [2][2];
// int hasil [2][2];

// cout << "matriks 1" << endl;
// for (int i = 0; i < 2; i++){
//     for (int j = 0; j < 2; j++){
//         cout << "masukkan elemen baris "<< i + 1 << " kolom " << j + 1 << " : ";
//         cin >> matriks1[i][j];
//     }
// }
// cout << "matriks 2" << endl;
// for (int i = 0; i < 2; i++){
//     for (int j = 0; j < 2; j++){
//         cout << "masukkan elemen baris "<< i + 1 << " kolom " << j + 1 << " : ";
//         cin >> matriks2[i][j];
//     }
// }
// cout << "hasil penjumlahan" << endl;
// for (int i = 0; i < 2; i++){
//     for (int j = 0; j < 2; j++){
//         hasil [i][j] = matriks1 [i][j] + matriks2 [i][j];
//         cout << hasil [i][j] << " ";
        
//     }
//     cout << endl;
// }

//  array <float, 5> nilai = {87.2, 90, 100, 95.7, 78.5};

//  cout << "nilai : ";
// //  for (int i = 0 ; i < nilai.size (); i++){
// //     cout << nilai[i] << " ";
// //  }
 
//  for (float n : nilai){
//     cout << n  << " ";
//  }
}