#include <stdio.h>

int main() {
    int n, k, i, j, amount, total = 0;

    scanf("%d", &n);
    scanf("%d", &k);

    for (i = 1; i <= n; i++) {
        amount = 0;
        for (j = i; j >= 1; j--) {
            printf("(%d * %d)", j, k);
            if (j != 1) {
                printf(" + ");
            }
            amount = amount + j * k;
        }
        printf(" = %d\n", amount);
        total = total + amount;
    }
    printf("%d\n", total);
    return 0;
}