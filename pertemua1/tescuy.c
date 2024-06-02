#include<stdio.h>
int main ()
{
   char nama [50]; //untuk karakter
   int nim;
   char kom;
   float ip;
   
   printf ("masukkan nama: "); 
   // scanf ("%s", &nama); ---> scanf hanya dapat membaca satu kata saja
gets (nama); // untuk membaca inputan nama yang di masukkan user, karna biasa nya nama panjang melebihi satu kata.


   printf ("Masukkan NIM: ");
   scanf ("%d", &nim);

   printf("Masukkan Kom: ");
   scanf(" %c", &kom);

   printf("masukkan IP: ");
   scanf ("%f",&ip);
   
   printf ("NAMA: %s\n",nama);
   printf ("NIM: %d\n",nim);
   printf ("KOM: %c\n",kom);
   printf ("IP: %.2f\n",ip);

}