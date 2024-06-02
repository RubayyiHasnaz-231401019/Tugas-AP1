#include <iostream>
using namespace std;
int main()
{
    // program unutk menghitung luas dan volume bola
    int r, phi;
    float luasp, volume; // float digunakan untuk menyimpan bilangan desimal atau bilangan rill
    const float PHI = 3.14;

     cout << "masukkan jari jari (cm): ";
     cin >> r;

     luasp = 4* PHI * (r*r);
     volume = (4/3) * PHI * (r*r*r);

     cout << "luas = "<< luasp << endl;
     cout << "volume = " << volume << endl;
     
     return 0;

}