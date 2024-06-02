// #include <iostream>
// using namespace std;
// void jurusan()
// {
//     int i;
//     for (i=1;i<=5;i++)
//     {
//         cout <<"ilmu Komputer USU"<<endl;
//     }
// }
// main()
// {
//     jurusan ();
//     cout <<"angkatan 2023"<< endl;
//     jurusan();
//     system ("pause");
// }
// int add2ints(int a,int b)
// {
//     int hasil;
//     hasil= a+b;
//     return hasil;
// }
// main ()
// {
//     int x,y;
//     cout <<"input bil pertama: ";
//     cin >> x;
//     cout <<"input bil kedua: ";
//     cin >> y;
//     cout <<"hasil adalah "<< add2ints (x,y)<<endl;
//     system ("pause");
// }

#include <iostream>
using namespace std;
void input_array(int A[],int n)
{ for(int c=0;c<n;c++)
{cout<<"Input nilai A["<<c<<"] : ";
cin>>A[c];}
}
long jumlah(int A[],int n)
{ long jml=0; 
for(int c=0;c<n;c++)
{jml += A[c];}
return jml;
}
main(){
    int x[100];
    int byk_elemen;
long hsl;
cout<<"masukkan banyak elemen : ";
cin>>byk_elemen;
input_array(x,byk_elemen);
cout<<endl;
hsl=jumlah(x,byk_elemen); 
cout<<"\nHasilnya =  "<<hsl;
system("pause");
}