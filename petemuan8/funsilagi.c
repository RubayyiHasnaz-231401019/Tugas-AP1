#include <stdio.h>

// int add2ints(int a, int b) {
//     int hasil;
//     hasil = a + b;
//     return hasil;
// }

// int main() {
//     int x, y;
//     printf("input bil pertama: ");
//     scanf("%d", &x);
//     printf("input bil kedua: ");
//     scanf("%d", &y);
//     printf("hasil adalah %d\n", add2ints(x, y));
//     system("pause");
//     return 0;
// }


void input_array(int A[], int n) {
    for (int c = 0; c < n; c++) {
        printf("Input nilai A[%d] : ", c);
        scanf("%d", &A[c]);
    }
}
long jumlah(int A[], int n) {
    long jml = 0;
    for (int c = 0; c < n; c++) {
        jml += A[c];
    }
    return jml;
}
int main() {
    int x[100];
    int byk_elemen;
    long hsl;
    printf("masukkan banyak elemen : ");
    scanf("%d", &byk_elemen);
    input_array(x, byk_elemen);
    printf("\n");
    hsl = jumlah(x, byk_elemen);
    printf("\nHasilnya = %d", hsl);

    return 0;
}