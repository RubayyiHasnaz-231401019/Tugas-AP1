#include <stdio.h>

int tambah(int x, int y) { 
return x + y;
}

int main() {
    int a, b, c;
    printf("A = "); 
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    c = tambah(a, b); 
    printf("A + B = %d\n", c);
    getchar();
}