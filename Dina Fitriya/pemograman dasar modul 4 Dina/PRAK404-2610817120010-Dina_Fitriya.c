#include <stdio.h>

int main() {
    int choice;
    float x, y;

    while (1) {
        printf("Pilih program\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("5. Exit\n");
        printf("Masukkan Pilihan : ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Terimakasih, telah menggunakan kalkulator Dina Fitriya\n");
            break;
        } else if (choice < 1 || choice > 5 ) {
            printf("Input anda salah, silahkan coba lagi\n");
        } else {
            printf("Masukkan nilai pertama : ");
            scanf("%f", &x);
            printf("Masukkan nilai kedua : ");
            scanf("%f", &y);
            
            if (choice == 1) {
                printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", x, y, x + y);
            } else if (choice == 2) {
                printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", x, y, x - y);
            } else if (choice == 3) {
                printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", x, y, x * y);
            } else if (choice == 4) {
                printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", x, y, x / y);
            }
        }
    }
    return 0;
}