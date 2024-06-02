#include <iostream>
using namespace std;
int main() {
    // goto label // sebuah pernyataan yang digunakan untuk melompat ke baris kode tertentu dalam program
    // a:
    // cout << "hello word "<< endl;
    // goto d;
    // b:
    // cout << "universitas sumatera utara" << endl;
    // return 0;
    // c: 
    // cout << "fasilkom-TI" << endl;
    // goto b;
    // d:
    // cout << "ilmu komputer" << endl;
    // goto c;
   
   // menampilkan bialngan genap menggunakan goto
    // int i = 1;
    // genap:
    // if (i % 2 == 0) {
    //     cout << i << " ";
    // }
    // i ++;
    // if (i <= 10) {
    //     goto genap;
    // }

    // while
    // int i = 1;
    // while (i <= 10){
    //     if (i % 2 == 0){
    //         cout << i << " ";
    //     }
    // i++;
    // }

    // do while
//     int i = 1;

//     do {
//         cout << i << endl;

//     } while (i<= 0);
// for
// for (int i=1; i <= 10; i++ );
// {
//     cout << "hello word " << endl;
// }
int r = 5;
for (int i =1; i <= r; i++){
for (int j = 1; j <= i; j++){
cout << "* ";
}
cout <<  endl;
}
}