#include <stdio.h>

int number_of_digits(int n) {
    if (n < 10) {
        return n;
    }
    return (n % 10) + number_of_digits(n / 10);
}

int main() {
    int n;

    scanf("%d", &n);
    printf("Jumlah digit dari %d adalah %d\n", n,  number_of_digits(n));
    return 0;
}