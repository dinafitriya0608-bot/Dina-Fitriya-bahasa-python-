#include <stdio.h>

int main () {
    int a, b, i, x, y, difference;

    scanf("%d %d", &a, &b);

    if (a > b) {
        difference = a - b;
    } else {
        difference = b - a;
    }

    for (i = 0; i <= difference; i++) {
        if (a < b) {
            x = a + i;
            y = b - i;
        } else {
            x = a - i;
            y = b + i;
        }
        printf("%d %d", x, y);
        if (i != difference) {
            printf(" - ");
        }
    }
    printf("\n");
    return 0;
}