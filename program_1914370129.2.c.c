#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n = 5;
    for (int baris = 1; baris <= n; baris++){
        for (int kolom = 1; kolom <= baris; kolom++)
            printf("*");
        printf("\n");
    }
    for (int baris = 1; baris <= n; baris++){
        for (int kolom = 1; kolom <= 5-baris; kolom++)
            printf("*");
        printf("\n");
    }
    return 0;
}
