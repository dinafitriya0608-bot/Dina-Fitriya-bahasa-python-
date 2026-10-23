#include <stdio.h>

int main() {
    int n, i, beginning;

    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }

    printf("\n");

    if (n % 2 == 0) {
        beginning = n;
    } else {
        beginning = n - 1;
    }

    for (i = beginning; i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}