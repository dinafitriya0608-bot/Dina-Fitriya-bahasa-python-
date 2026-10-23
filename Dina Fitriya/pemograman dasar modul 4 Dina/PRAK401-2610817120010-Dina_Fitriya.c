#include <stdio.h>

int main() {
    int multiple, i;
    char symbol;

    scanf("%d %c", &multiple, &symbol);

    for (i = 1; i <= 50; i++) {
        if (i % multiple == 0) {
            printf("%c ", symbol);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}