#include <iostream>
using namespace std;
// void penjumlahan (int a, int b); {
// cout << a + b << endl;
//}

void doubleValue (int*a) {
    *a *= 2; 
}

int kali2 (int a);

int main () {
    system ("cls");
    // pointer declaration // pointer untuk akses langsung ke memori, Melewatkan Parameter ke Fungsi, 
    int number = 35;
    int*pointer_number = &number;

    cout << "isi variabel number = " << number << endl;
    cout << "alamat memori variabel number = " << &number << endl;
    cout << "isi variabel number = " << pointer_number << endl;
    cout << "alamat memori variabel pointer_number = "<< *pointer_number <<endl;
    cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;
     cout << endl;
    // pointer operation
    *pointer_number = 25;
    cout << " isi variabel number = " << number << endl;
    cout << " alamat memori variabel number = " << &number << endl;
    cout << "isi variabel number = " << pointer_number << endl;
    cout << "alamat memori variabel pointer_number = "<< *pointer_number <<endl;
    cout << "alamat memori variabel pointer_number = " << &pointer_number << endl;
     cout << endl;
    
    // pointer on array
    int num []= {1, 2, 3, 4, 5};
    int* pointer_num = num;
    cout << "isi variabel num = " << num [0]<< endl;
    cout << "alamat memeori variabel num= " << &num [0] << endl;
    // cout << "alamat memeori variabel num= " << num << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "alamat memori variabel pointer num = " << &pointer_num << endl;
    cout << endl;

    *pointer_num += 5;
    cout << "isi variabel num = " << num [0]<< endl;
    cout << "alamat memeori variabel num= " << &num [0] << endl;
    cout << "isi variabel pointer_num = " << pointer_num << endl;
    cout << "isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "alamat memori variabel pointer num = " << &pointer_num << endl;

    //pointer 
    int num1 = 5;
    int num2 = 7;
    // penjumlahan (num1, num2);
    cout << num1 << endl;
    cout << num2 << endl;

    // penjumlahpointer (&num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    // pointer in pointer
    int score = 4 ;
    int*pointer_score = &score;
    int**ptr_pointer_score = &pointer_score;
    cout << "isi varaibel score " << score << " dan alamat memorinya" << &score << endl;
    cout << "isi variabel ponter_score " "isi variabel yang di tunjuk oleh pointer_score " << *pointer_score << "alamat memori pointer score " << &pointer_score << endl;
    cout <<"isi variabel ptr_pointer_score" << pointer_score << "isi variabel yang ditunjuk oleh ptr_pointer_score" << **ptr_pointer_score << "alamat memori ptr_pointer_score" << &ptr_pointer_score<< endl; 

    // dynamic pointer
    int* ptr = new  int; // memory allocation
    *ptr = 30;
    cout << "isi variabel ptr" << *ptr << "alamat vriabel ptr " << &ptr << endl;
    delete ptr ;
 
    cout << endl;



    
}
