#include <iostream>
using namespace std;
int main ()
{     float BB, TB, BMI;     
    cout <<"Masukkan berat badan (kg) : "; 
    cin >>BB;    
    cout << "Masukkan tinggi badan (m) : "; 
    cin >> TB;     
    BMI = BB/(TB*TB);     
    if (BMI < 18.5) {
    cout <<"Anda underweight"; 
    }else if (BMI >= 18.5 && BMI < 25){
        cout <<"anda normal wight" << endl;
    }else if (BMI <= 25 && BMI > 30){
        cout <<"anda overweight" << endl;
    }else if (BMI >= 30) {
        cout << "anda obesitas"<< endl;
    }
}