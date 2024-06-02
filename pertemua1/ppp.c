#include <stdio.h>
int main ()
{
    int nim ;
    char kom;
    float ip;

    printf("hello word\n");

    printf ("Masukkan NIM: ");
    scanf ("%d", &nim);

    printf ("masukkan KOM: ");
    scanf (" %c", &kom);

    printf ("Masukaan IP: ");
    scanf ("%f", &ip);

    printf ("NIM:  %d\n", nim);
    printf ("KOM:  %c\n", kom);
    printf ("IP:  %.2f\n", ip);

    
}