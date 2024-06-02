#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int jlh_siswa;
    vector <double>nilai; // 
    cout <<"jumlah siswa: ";
    cin >> jlh_siswa;
    nilai.resize(jlh_siswa);
    for (int i=0; i<(int)nilai.size();i++){
        cout <<"nilai"<< i+1<<": ";
        cin >> nilai [i];
    }
}